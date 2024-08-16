#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "RailFence.h"
#include "vignere.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Connect checkboxes to the slot
    connect(ui->vignerecheckBox, &QCheckBox::stateChanged, this, &MainWindow::on_methodCheckboxes_changed);
    connect(ui->railFenceCheckbox, &QCheckBox::stateChanged, this, &MainWindow::on_methodCheckboxes_changed);

    // Connect reset button to the slot
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::on_resetButton_clicked);

    // Initially disable key/depth fields
    ui->KeyInput->setEnabled(false);
    ui->spinBox->setEnabled(false);

    // Set default values for the spin box
    ui->spinBox->setValue(1); // Default depth value
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_browseButton_clicked() {
    selectedFilePath = QFileDialog::getOpenFileName(this, "Select File");
    ui->lineEdit->setText(selectedFilePath);
}

void MainWindow::on_methodCheckboxes_changed() {
    vigenereSelected = ui->vignerecheckBox->isChecked();
    railFenceSelected = ui->railFenceCheckbox->isChecked();

    if (vigenereSelected && railFenceSelected) {
        // Enable both input fields if both methods are selected
        ui->KeyInput->setEnabled(true);
        ui->spinBox->setEnabled(true);
    } else if (vigenereSelected) {
        ui->KeyInput->setEnabled(true);
        ui->spinBox->setEnabled(false);
    } else if (railFenceSelected) {
        ui->KeyInput->setEnabled(false);
        ui->spinBox->setEnabled(true);
    } else {
        ui->KeyInput->setEnabled(false);
        ui->spinBox->setEnabled(false);
    }
}

void MainWindow::on_encryptButton_clicked() {
    if (selectedFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file first.");
        return;
    }

    QString tempFilePath = selectedFilePath;

    if (vigenereSelected) {
        QString key = ui->KeyInput->text();
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère cipher.");
            return;
        }
        // Perform Vigenère encryption
        Vignere v(tempFilePath.toStdString(), key.toStdString());
        v.encryption();

    }

    if (railFenceSelected) {
        int depth = ui->spinBox->value();
        if (depth <= 0) {
            QMessageBox::warning(this, "Error", "Please enter a valid depth for Rail Fence cipher.");
            return;
        }
        // Perform Rail Fence encryption on the result of Vigenère (if applicable)
        RailFence r(tempFilePath.toStdString(), depth);
        r.encrypt();
    }

    // Display the result after encryption
    QFile file(tempFilePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        ui->textEdit->setPlainText(in.readAll());
        file.close();
    }
}

void MainWindow::on_decryptButton_clicked() {
    if (selectedFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a file first.");
        return;
    }

    QString tempFilePath = selectedFilePath;

    if (railFenceSelected) {
        int depth = ui->spinBox->value();
        if (depth <= 0) {
            QMessageBox::warning(this, "Error", "Please enter a valid depth for Rail Fence cipher.");
            return;
        }
        // Perform Rail Fence decryption
        RailFence r(tempFilePath.toStdString(), depth);
        r.decode();
    }

    if (vigenereSelected) {
        QString key = ui->KeyInput->text();
        if (key.isEmpty()) {
            QMessageBox::warning(this, "Error", "Please enter a key for Vigenère cipher.");
            return;
        }
        // Perform Vigenère decryption on the result of Rail Fence (if applicable)
        Vignere v(tempFilePath.toStdString(), key.toStdString());
        v.decryption();
    }

    // Display the result after decryption
    QFile file(tempFilePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        ui->textEdit->setPlainText(in.readAll());
        file.close();
    }
}

void MainWindow::on_resetButton_clicked() {
    // Reset all input fields
    ui->lineEdit->clear();           // Clear file path
    ui->KeyInput->clear();           // Clear key input
    ui->spinBox->setValue(1);        // Reset spin box to default value (1)
    ui->textEdit->clear();           // Clear text edit area
    ui->vignerecheckBox->setChecked(false); // Uncheck Vigenère checkbox
    ui->railFenceCheckbox->setChecked(false); // Uncheck Rail Fence checkbox

    // Disable key/depth fields
    ui->KeyInput->setEnabled(false);
    ui->spinBox->setEnabled(false);

    // Reset selected method flags
    vigenereSelected = false;
    railFenceSelected = false;
}
