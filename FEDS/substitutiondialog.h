#ifndef SUBSTITUTIONDIALOG_H
#define SUBSTITUTIONDIALOG_H

#include <QDialog>
#include<confirmationdialog.h>


namespace Ui {
class thirdDialog;
}

class thirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit thirdDialog(QWidget *parent = nullptr);
    ~thirdDialog();
    void setFileLocation(const QString &location);



private slots:
    void on_BackButton_clicked();
    void on_CancelButton_clicked();
    void onincludeCommasCheckBox_clicked(bool);
    void onkeepCaseCheckBox_clicked(bool);
    void on_NextButton_clicked();

private:
    Ui::thirdDialog *ui;
    QString fileLocation;


};

#endif // SUBSTITUTIONDIALOG_H
