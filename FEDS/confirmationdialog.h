#ifndef CONFIRMATIONDIALOG_H
#define CONFIRMATIONDIALOG_H

#include <QDialog>

namespace Ui {
class fifthDialog;
}

class fifthDialog : public QDialog
{
    Q_OBJECT

public:
    explicit fifthDialog(QWidget *parent = nullptr);
    ~fifthDialog();
    void setKey(const QString &key);//method to set and display key
    void setDepth(int depth);//method to set and display depth
    void setFileLocation(const QString &location);
private slots:
    void on_backButton_clicked();
    void on_cancelButton_clicked();
    void on_confirmButton_clicked();
      // Declare the method to set the key value


private:
    Ui::fifthDialog *ui;
    QString fileloacation;

};

#endif // CONFIRMATIONDIALOG_H

