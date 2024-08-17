#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QDialog>
#include <QString>
#include<QCloseEvent>


namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();

protected:
    void closeEvent(QCloseEvent *event);  // Declaration of closeEvent

private slots:
    void on_browseButton_clicked();
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();
    void on_methodSelectionChanged();
    void on_resetButtton_clicked();

private:
    Ui::SecondWindow *ui;

    QString readFileContent(const QString &filePath);
    void writeFileContent(const QString &filePath, const QString &content);

};

#endif // SECONDWINDOW_H
