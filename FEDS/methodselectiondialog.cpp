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
void secondDialog::on_backButton_clicked()
{
    reject();
}

void secondDialog::on_nextButton_clicked()
{

    if (ui->substitutionRadioButton->isChecked()) {
        t = new thirdDialog(this);
        t->setFileLocation(fileLocation);
        t->show();
    } else if (ui->transpositionRadioButton->isChecked()) {
        f = new fourthDialog(this);
        f->setFileLocation(fileLocation);
        f->show();
    } else {
        // Show a warning if no method is selected
        QMessageBox::warning(this, "Warning", "Please select a method.");
    }
}

