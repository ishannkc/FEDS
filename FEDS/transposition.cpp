#include "transposition.h"
#include "ui_transposition.h"

fourthDialog::fourthDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fourthDialog)
{
    ui->setupUi(this);
}

fourthDialog::~fourthDialog()
{
    delete ui;
}
void fourthDialog::setFileLocation(const QString &location){
    fileLocation=location;
}
int fourthDialog::getDepth()const{
    return ui->depthSpinBox->value();
}


void fourthDialog::on_nextButton_clicked()
{
    fourthDialog fourthWindow(this);
    int depth = ui->depthSpinBox->value();//get the depth value from the spon box

        final=new fifthDialog(this);
        final->setFileLocation(fileLocation);//pass fiel location to fifth window
        final->setDepth(depth);  // Pass the depth value to the fifth window

        this->hide();
        final->show();

}
void fourthDialog::on_backButton_clicked()
{
    this->parentWidget()->show();
   this-> close();

}

void fourthDialog::on_cancelButton_clicked()
{
    QApplication::quit();
}

