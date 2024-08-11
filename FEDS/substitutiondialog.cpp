#include "substitutiondialog.h"
#include "ui_substitutiondialog.h"
#include<QMessageBox>

thirdDialog::thirdDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::thirdDialog)
{
    ui->setupUi(this);
}

thirdDialog::~thirdDialog()
{
    delete ui;
}
void thirdDialog::setFileLocation(const QString &location) {
    fileLocation = location;
}
void thirdDialog::on_NextButton_clicked()
{
   QString k = ui->keyLineEdit->text();  // Get the key entered by the user
    if(k.isEmpty()){
       QMessageBox::warning(this,"warning","please enter the key");
        return;
    }
    fifthDialog finalDialog(this);//create an instance of the fifth window
   finalDialog.setFileLocation(fileLocation);
    finalDialog.setKey(k);  // Pass the key to fifth window
   finalDialog.exec();//show the fifth window
}



void thirdDialog::onincludeCommasCheckBox_clicked(bool )
{
    ui->includeCommasCheckBox->isChecked();
}

void thirdDialog::onkeepCaseCheckBox_clicked(bool)
{
     ui->keepCaseCheckBox->isChecked();
}
void thirdDialog::on_BackButton_clicked()
{
    reject();
}
void thirdDialog::on_CancelButton_clicked()
{
    reject();
}
