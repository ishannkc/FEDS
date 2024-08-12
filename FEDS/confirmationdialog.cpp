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
    ui->fileLocationLine->setText(location);//Display the file location
}
void fifthDialog::setKey(const QString &key) {
    ui->KeyLline->setText(key);  // Display the key value
}
void fifthDialog::setDepth(int depth) {
    ui->depthLine->setText(QString::number(depth));//Display the depth
}
void fifthDialog::on_backButton_clicked()
{
    this->parentWidget()->show();
    this->close();
}


void fifthDialog::on_cancelButton_clicked()
{
    QApplication::quit();
}

void fifthDialog::on_confirmButton_clicked()
{

}
