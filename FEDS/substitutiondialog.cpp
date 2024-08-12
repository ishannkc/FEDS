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
    final =new fifthDialog(this);//create an instance of the fifth window
    final->setFileLocation(fileLocation);//pass file location to the fifth window
    final->setKey(k);  // Pass the key to fifth window


   this->hide();
   final->exec();
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
    this->parentWidget()->show();
    this->close();
}
void thirdDialog::on_CancelButton_clicked()
{
    QApplication::quit();
}
