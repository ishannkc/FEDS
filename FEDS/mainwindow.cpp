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
        s->setFileLocation(fileLocation);
        s->exec();
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
        s->show();
      //  secondDialog s1;
     //  s1.setModal(true);//this method is used to open only one window at a time
       // s1.exec();
    }
}
void MainWindow::on_cancelButton_clicked()
{
    close();
}
