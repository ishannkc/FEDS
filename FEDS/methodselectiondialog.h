#ifndef METHODSELECTIONDIALOG_H
#define METHODSELECTIONDIALOG_H

#include <QDialog>
#include<substitutiondialog.h>
#include "transposition.h"


namespace Ui {
class secondDialog;
}

class secondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secondDialog(QWidget *parent = nullptr);
    ~secondDialog();
    void setFileLocation(const QString &location);

private slots:
    void on_backButton_clicked();
    void on_nextButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::secondDialog *ui;
    thirdDialog *t;
    fourthDialog *f;
    QString fileLocation;
};
#endif
