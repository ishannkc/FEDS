#include "mainwindow.h"
#include "ui_mainwindow.h"

// Constructor implementation for MainWindow.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), secondWindow(nullptr)
{
    // Set up the UI components for the MainWindow.
    ui->setupUi(this);
    // Connect the "Next" button's clicked signal to the on_nextButton_clicked slot.
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::on_nextButton_clicked);
}

// Destructor implementation for MainWindow.
MainWindow::~MainWindow()
{
    // Clean up the UI components to prevent memory leaks.
    delete ui;
}

// Slot function implementation for handling the "Next" button click event.
void MainWindow::on_nextButton_clicked()
{
    // Check if the secondWindow pointer is null, meaning the second window has not been created.
    if (secondWindow == nullptr) {
        // Create a new SecondWindow object, passing this MainWindow as the parent.
        // The parent argument ensures proper memory management and ownership.
        secondWindow = new SecondWindow(this);
    }
    // Hide the current MainWindow.
    this->hide();
    // Show the second window to the user.
    secondWindow->show();
}
