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
void fourthDialog::on_backButton_clicked()
{
    reject();

}

void fourthDialog::on_nextButton_clicked()
{
    fourthDialog fourthWindow(this);
    int depth = ui->depthSpinBox->value();

        fifthDialog fifthWindow(this);
        fifthWindow.setFileLocation(fileLocation);
        fifthWindow.setDepth(depth);  // Pass the depth value to the fifth window
        fifthWindow.exec();


}

int fourthDialog::getDepth()const{
    return ui->depthSpinBox->value();
}
void fourthDialog::on_cancelButton_clicked()
{
    reject();
}

