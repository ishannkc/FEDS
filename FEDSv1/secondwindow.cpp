#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "vignere.hpp"
#include "railfence.hpp"

// Constructor for the SecondWindow class
SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),        // Initialize the base QDialog class with the parent widget
    ui(new Ui::SecondWindow) // Initialize the user interface
{
    ui->setupUi(this); // Set up the UI components defined in the .ui file



    // Hide UI components that should not be visible initially
    ui->depthLabel->setVisible(false);
    ui->KeyLine->setVisible(false);
    ui->punctuationCheckBox->setVisible(false);
    ui->caseCheckBox->setVisible(false);
    ui->depthSpinBox->setVisible(false);
    ui->textEdit->setVisible(false);  // Hide result text area initially

    // Connect the checkboxes to the method selection change handler
    connect(ui->vigenereCheckBox, &QCheckBox::toggled, this, &SecondWindow::on_methodSelectionChanged);
    connect(ui->railFenceCheckBox, &QCheckBox::toggled, this, &SecondWindow::on_methodSelectionChanged);
}

// Destructor for the SecondWindow class
SecondWindow::~SecondWindow()
{
    delete ui;  // Clean up the user interface object
}

// Function to read the content of a file given its path
QString SecondWindow::readFileContent(const QString &filePath)
{
    QFile file(filePath);  // Create a QFile object with the given path
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))  // Try to open the file in read-only mode
        return QString();  // If opening fails, return an empty string

    QTextStream in(&file);  // Create a text stream to read the file's content
    return in.readAll();  // Return the entire content of the file
}

// Function to write content to a file given its path
void SecondWindow::writeFileContent(const QString &filePath, const QString &content)
{
    QFile file(filePath);  // Create a QFile object with the given path
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))  // Try to open the file in write-only mode
        return;  // If opening fails, return without doing anything

    QTextStream out(&file);  // Create a text stream to write content to the file
    out << content;  // Write the content to the file
    file.close();  // Close the file after writing
}

// Slot function called when the browse button is clicked
void SecondWindow::on_browseButton_clicked()
{
    QString fileLocation = QFileDialog::getOpenFileName(this, "Select File");  // Open a file dialog to select a file
    if (!fileLocation.isEmpty())  // If a file was selected
    {
        ui->fileLocationLine->setText(fileLocation);  // Set the file path in the corresponding line edit
    }
}

// Slot function called when the encrypt button is clicked
void SecondWindow::on_encryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLine->text();  // Get the file path from the line edit
    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file!");  // Show a warning if no file is selected
        return;
    }

    QString fileContent = readFileContent(fileLocation);  // Read the content of the selected file

    // Check which encryption methods are selected
    bool vigenereSelected = ui->vigenereCheckBox->isChecked();
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();

    if (!vigenereSelected && !railFenceSelected) {
        QMessageBox::warning(this, "Error", "Please select at least one encryption method!");  // Show a warning if no method is selected
        return;
    }

    QString encryptedContent;

    if (vigenereSelected) {
        QString key = ui->KeyLine->text();  // Get the key from the key line edit
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère Cipher!");  // Show a warning if the key is empty
            return;
        }

        // Determine the ch value based on user selections for punctuation and case
        int ch = 0;

        if (ui->punctuationCheckBox->isChecked() && ui->caseCheckBox->isChecked()) {
            ch = 3;  // Both "preserve punctuation" and "preserve case" are selected
        } else if (ui->punctuationCheckBox->isChecked()) {
            ch = 1;  // Only "preserve punctuation" is selected
        } else if (ui->caseCheckBox->isChecked()) {
            ch = 2;  // Only "preserve case" is selected
        }



        // Create a Vigenere object and call the encryption method
        Vigenere vignere(fileLocation.toStdString(), key.toStdString(), ch);
        vignere.encryption();
        encryptedContent = readFileContent(fileLocation);  // Read the encrypted content from the file
    }

    if (railFenceSelected) {
        int depth = ui->depthSpinBox->value();  // Get the depth value from the spin box
        RailFence rail(depth);
        encryptedContent = QString::fromStdString(rail.encrypt(fileContent.toStdString()));  // Encrypt the content using Rail Fence
    }

    writeFileContent(fileLocation, encryptedContent);  // Write the encrypted content back to the file

    // Display the encrypted content in the result text area
    ui->textEdit->setText(encryptedContent);
    ui->textEdit->setVisible(true);
}

// Slot function called when the decrypt button is clicked
void SecondWindow::on_decryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLine->text();  // Get the file path from the line edit
    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file!");  // Show a warning if no file is selected
        return;
    }

    QString fileContent = readFileContent(fileLocation);  // Read the content of the selected file

    // Check which decryption methods are selected
    bool vigenereSelected = ui->vigenereCheckBox->isChecked();
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();

    if (!vigenereSelected && !railFenceSelected) {
        QMessageBox::warning(this, "Error", "Please select at least one decryption method!");  // Show a warning if no method is selected
        return;
    }

    QString decryptedContent;

    if (vigenereSelected) {
        QString key = ui->KeyLine->text();  // Get the key from the key line edit
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère Cipher!");  // Show a warning if the key is empty
            return;
        }

        // Determine the ch value based on user selections for punctuation and case
        int ch = 0;

        if (ui->punctuationCheckBox->isChecked() && ui->caseCheckBox->isChecked()) {
            ch = 3;  // Both "preserve punctuation" and "preserve case" are selected
        } else if (ui->punctuationCheckBox->isChecked()) {
            ch = 1;  // Only "preserve punctuation" is selected
        } else if (ui->caseCheckBox->isChecked()) {
            ch = 2;  // Only "preserve case" is selected
        }

        // Create a Vigenere object and call the decryption method
        Vigenere vignere(fileLocation.toStdString(), key.toStdString(), ch);
        vignere.decryption();
        decryptedContent = readFileContent(fileLocation);  // Read the decrypted content from the file
    }

    if (railFenceSelected) {
        int depth = ui->depthSpinBox->value();  // Get the depth value from the spin box
        RailFence rail(depth);
        decryptedContent = QString::fromStdString(rail.decrypt(fileContent.toStdString()));  // Decrypt the content using Rail Fence
    }

    writeFileContent(fileLocation, decryptedContent);  // Write the decrypted content back to the file

    // Display the decrypted content in the result text area
    ui->textEdit->setText(decryptedContent);
    ui->textEdit->setVisible(true);
}

// Slot function called when the reset button is clicked
void SecondWindow::on_resetButtton_clicked()
{
    // Reset all input fields
    ui->fileLocationLine->clear();  // Clear the file path line edit
    ui->KeyLine->clear();           // Clear the key line edit
    ui->depthSpinBox->setValue(1);  // Reset the spin box to the default value (1)
    ui->textEdit->clear();          // Clear the text edit area
    ui->vigenereCheckBox->setChecked(false); // Uncheck the Vigenère checkbox
    ui->railFenceCheckBox->setChecked(false); // Uncheck the Rail Fence checkbox
    ui->textEdit->hide();  // Hide the text edit area

    // Disable key/depth fields
    ui->depthLabel->setEnabled(false);
}

// Slot function called when the encryption/decryption method selection changes
void SecondWindow::on_methodSelectionChanged()
{
    bool vigenereSelected = ui->vigenereCheckBox->isChecked();  // Check if Vigenère is selected
    bool railFenceSelected = ui->railFenceCheckBox->isChecked();  // Check if Rail Fence is selected

    // Show or hide the key and depth fields based on selections
    ui->KeyLine->setVisible(vigenereSelected);
    ui->punctuationCheckBox->setVisible(vigenereSelected);
    ui->caseCheckBox->setVisible(vigenereSelected);
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
