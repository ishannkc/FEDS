#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_browseButton_clicked();
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();
    void on_methodCheckboxes_changed();

    void on_resetButton_clicked();

private:
    Ui::MainWindow *ui;
    QString selectedFilePath;
    bool vigenereSelected;
    bool railFenceSelected;
};

#endif // MAINWINDOW_H
