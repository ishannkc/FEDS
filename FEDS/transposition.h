#ifndef TRANSPOSITION_H
#define TRANSPOSITION_H

#include <QDialog>
#include<confirmationdialog.h>
namespace Ui {
class fourthDialog;
}

class fourthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit fourthDialog(QWidget *parent = nullptr);
    ~fourthDialog();
    int getDepth() const; //method to get the depth value
     void setFileLocation(const QString &location);


private slots:
    void on_backButton_clicked();
    void on_nextButton_clicked();
    void on_cancelButton_clicked();

private:
    Ui::fourthDialog *ui;
    fifthDialog *final;
    QString fileLocation;


};
#endif // TRANSPOSITION_H

