#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

// Include necessary Qt classes
#include <QDialog>      // Base class for dialog windows
#include <QString>      // Qt class for handling text strings
#include <QCloseEvent>  // Handles close events for the window

namespace Ui {
class SecondWindow;
};

// SecondWindow class declaration, inheriting from QDialog
class SecondWindow : public QDialog
{
    Q_OBJECT  // Qt macro for enabling signals and slots in the class

public:
    // Constructor: sets up the SecondWindow, optionally maximizing it
    explicit SecondWindow(QWidget *parent = nullptr);

    // Destructor: cleans up when the SecondWindow is destroyed
    ~SecondWindow();

protected:
    // Event handler for when the window is closed
    void closeEvent(QCloseEvent *event);

private slots:
    // Slot functions to handle user actions
    void on_browseButton_clicked();          // When the browse button is clicked
    void on_encryptButton_clicked();         // When the encrypt button is clicked
    void on_decryptButton_clicked();         // When the decrypt button is clicked
    void on_methodSelectionChanged();        // When the encryption/decryption method selection is changed
    void on_resetButtton_clicked();          // When the reset button is clicked

private:
    Ui::SecondWindow *ui;  // Pointer to the user interface of SecondWindow

    // Helper functions for file operations
    QString readFileContent(const QString &filePath);         // Reads the content of a file
    void writeFileContent(const QString &filePath, const QString &content); // Writes content to a file
};

#endif // SECONDWINDOW_H
