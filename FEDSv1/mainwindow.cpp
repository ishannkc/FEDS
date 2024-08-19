#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), secondWindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->nextButton, &QPushButton::clicked, this, &MainWindow::on_nextButton_clicked);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextButton_clicked()
{
    // Check if second window is null, if so create it
    if (secondWindow == nullptr) {
        secondWindow = new SecondWindow(this);  // Pass parent for ownership
    }
    this->hide();
    // Show the second window
    secondWindow->show();
}
