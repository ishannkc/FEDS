#include "methodselectiondialog.h"
#include "ui_methodselectiondialog.h"
#include<QMessageBox>
#include<substitutiondialog.h>

secondDialog::secondDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondDialog)
{
    ui->setupUi(this);
}

secondDialog::~secondDialog()
{
    delete ui;
}
void secondDialog::setFileLocation(const QString &location) {
    fileLocation = location;
}


void secondDialog::on_nextButton_clicked()
{

    if (ui->substitutionRadioButton->isChecked()) {
        t = new thirdDialog(this);
        t->setFileLocation(fileLocation);

       this-> hide();
        t->exec();

    }
    else if (ui->transpositionRadioButton->isChecked()) {
        f = new fourthDialog(this);
        f->setFileLocation(fileLocation);

        this->hide();
        f->exec();

    } else {
        // Show a warning if no method is selected
        QMessageBox::warning(this, "Warning", "Please select a method.");
    }
}

void secondDialog::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}
void secondDialog::on_cancelButton_clicked()
{
   QApplication ::quit();
}

