#include "confirmationdialog.h"
#include "ui_confirmationdialog.h"

fifthDialog::fifthDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fifthDialog)
{
    ui->setupUi(this);
}

fifthDialog::~fifthDialog()
{
    delete ui;
}
void fifthDialog::setFileLocation(const QString &location) {
    ui->fileLocationLine->setText(location);
}
void fifthDialog::setKey(const QString &key) {
    ui->KeyLline->setText(key);  // Display the key value
}
void fifthDialog::setDepth(int depth) {
    ui->depthLine->setText(QString::number(depth));
}
void fifthDialog::on_backButton_clicked()
{
    reject();
}


void fifthDialog::on_cancelButton_clicked()
{
    close();
}

void fifthDialog::on_confirmButton_clicked()
{

}
