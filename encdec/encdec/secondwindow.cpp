#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "vignere.hpp"
#include "railfence.hpp"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    ui->keyLabel->setVisible(false);
    ui->depthLabel->setVisible(false);
    ui->KeyLine->setVisible(false);
    ui->punctuationCheckBox->setVisible(false);
    ui->caseCheckBox->setVisible(false);
    ui->depthSpinBox->setVisible(false);
    ui->textEdit->setVisible(false);  // Hide result text area initially

    connect(ui->vigenereCheckBox, &QCheckBox::toggled, this, &SecondWindow::on_methodSelectionChanged);
    connect(ui->railFenceCheckBox, &QCheckBox::toggled, this, &SecondWindow::on_methodSelectionChanged);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}


QString SecondWindow::readFileContent(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return QString();

    QTextStream in(&file);
    return in.readAll();
}

void SecondWindow::writeFileContent(const QString &filePath, const QString &content)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << content;
    file.close();
}
void SecondWindow::on_browseButton_clicked()
{
    QString fileLocation = QFileDialog::getOpenFileName(this, "Select File");
    if (!fileLocation.isEmpty())
    {
        ui->fileLocationLine->setText(fileLocation);
    }
}

void SecondWindow::on_encryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLine->text();
    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file!");
        return;
    }


    QString fileContent = readFileContent(fileLocation);

    bool vigenereSelected = ui->vigenereCheckBox->isChecked();
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();
    // Check if neither method is selected
    if (!vigenereSelected && !railFenceSelected) {
        QMessageBox::warning(this, "Error", "Please select at least one encryption method!");
        return;
    }
    QString encryptedContent;

    if (vigenereSelected) {
        QString key = ui->KeyLine->text();
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère Cipher!");
            return;
        }

        // Determine the ch value based on user selections
        int ch = 0;
        if (ui->punctuationCheckBox->isChecked()) {
            ch += 1;
        }
        if (ui->caseCheckBox->isChecked()) {
            ch += 2;
        }

        // Create Vignere object and call encryption method
        Vigenere vignere(fileLocation.toStdString(), key.toStdString(), ch);
        vignere.encryption();
        encryptedContent = readFileContent(fileLocation);

    }

    if (railFenceSelected) {
        int depth = ui->depthSpinBox->value();
        RailFence rail(depth);
        encryptedContent = QString::fromStdString(rail.encrypt(fileContent.toStdString()));
    }

    writeFileContent(fileLocation, encryptedContent);


    // Display the encrypted content in the result text area
    ui->textEdit->setText(encryptedContent);
    ui->textEdit->setVisible(true);
}

void SecondWindow::on_decryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLine->text();
    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file!");
        return;
    }

    QString fileContent = readFileContent(fileLocation);

    bool vigenereSelected = ui->vigenereCheckBox->isChecked();
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();
    if (!vigenereSelected && !railFenceSelected) {
        QMessageBox::warning(this, "Error", "Please select at least one decryption method!");
        return;
    }
    QString decryptedContent;

    if (vigenereSelected) {
        QString key = ui->KeyLine->text();
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère Cipher!");
            return;
        }

        // Determine the ch value based on user selections
        int ch = 0;
        if (ui->punctuationCheckBox->isChecked()) {
            ch += 1;
        }
        if (ui->caseCheckBox->isChecked()) {
            ch += 2;
        }

        // Create Vignere object and call decryption method
        Vigenere vignere(fileLocation.toStdString(), key.toStdString(), ch);
        vignere.decryption();
        // Read the decrypted content from the file
        decryptedContent = readFileContent(fileLocation);
    }

    if (railFenceSelected) {
        int depth = ui->depthSpinBox->value();
        RailFence rail(depth);
        decryptedContent = QString::fromStdString(rail.decrypt(fileContent.toStdString()));
    }

    writeFileContent(fileLocation, decryptedContent);


    // Display the decrypted content in the result text area
    ui->textEdit->setText(decryptedContent);
    ui->textEdit->setVisible(true);
}
void SecondWindow::on_resetButtton_clicked()
{
    // Reset all input fields
    ui->fileLocationLine->clear();           // Clear file path
    ui->KeyLine->clear();           // Clear key input
    ui->depthSpinBox->setValue(1);        // Reset spin box to default value (1)
    ui->textEdit->clear();           // Clear text edit area
    ui->vigenereCheckBox->setChecked(false); // Uncheck Vigenère checkbox
    ui->railFenceCheckBox->setChecked(false); // Uncheck Rail Fence checkbox
    ui->textEdit->hide();

    // Disable key/depth fields
    ui->keyLabel->setEnabled(false);
    ui->depthLabel->setEnabled(false);


}
void SecondWindow::on_methodSelectionChanged()
{
    bool vigenereSelected = ui->vigenereCheckBox->isChecked();
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();

    ui->KeyLine->setVisible(vigenereSelected);
    ui->punctuationCheckBox->setVisible(vigenereSelected);
    ui->caseCheckBox->setVisible(vigenereSelected);
    ui->keyLabel->setVisible(vigenereSelected);
    ui->depthLabel->setVisible(railFenceSelected);
    ui->depthSpinBox->setVisible(railFenceSelected);
}
void SecondWindow::closeEvent(QCloseEvent *event)
{
    // Confirm close dialog box
    QMessageBox::StandardButton resBtn = QMessageBox::question(this, "Confirm",
                                                               tr("Are you sure you want to close the window?\n"),
                                                               QMessageBox::No | QMessageBox::Yes, QMessageBox::Yes);

    if (resBtn == QMessageBox::Yes) {
        event->accept();  // Accept the close event and close the window
    } else {
        event->ignore();  // Ignore the close event, keeping the window open
    }
}
