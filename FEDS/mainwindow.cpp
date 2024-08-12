#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QFileDialog>
#include"methodselectiondialog.h"


MainWindow::MainWindow(QWidget *parent):
     QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browseButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Select File");
    if (!fileName.isEmpty()) {
        ui->fileLocationLineEdit->setText(fileName);
        fileLocation= fileName; //store file location
    }
}
void MainWindow::on_encryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLineEdit->text();//capture the file location

    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter or browse to a file location.");
    } else {
        s = new secondDialog(this);// this indicate our main window
        s->setFileLocation(fileLocation);//pass the file to second window
       this-> hide();//hide the current window when second window is open
        s->exec();//show the second window

    }
}
void MainWindow::on_decryptButton_clicked()
{
    QString fileLocation = ui->fileLocationLineEdit->text();//capture the file location
    if (fileLocation.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please enter or browse to a file location.");
    } else {

        s = new secondDialog(this);//this indicate our Mainwindow
        s->setFileLocation(fileLocation);
        this->hide();
        s->exec();

    }
}
void MainWindow::on_cancelButton_clicked()
{
    close();
}
