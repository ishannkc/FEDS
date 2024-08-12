/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *HeaderLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *FileLocation;
    QPushButton *fileLocationLineEdit;
    QPushButton *browseButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *cancelButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        HeaderLabel = new QLabel(centralwidget);
        HeaderLabel->setObjectName("HeaderLabel");
        HeaderLabel->setGeometry(QRect(20, 20, 421, 71));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 120, 531, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FileLocation = new QLabel(layoutWidget);
        FileLocation->setObjectName("FileLocation");

        horizontalLayout->addWidget(FileLocation);

        fileLocationLineEdit = new QPushButton(layoutWidget);
        fileLocationLineEdit->setObjectName("fileLocationLineEdit");

        horizontalLayout->addWidget(fileLocationLineEdit);

        browseButton = new QPushButton(layoutWidget);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(320, 250, 261, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(layoutWidget1);
        encryptButton->setObjectName("encryptButton");

        horizontalLayout_2->addWidget(encryptButton);

        decryptButton = new QPushButton(layoutWidget1);
        decryptButton->setObjectName("decryptButton");

        horizontalLayout_2->addWidget(decryptButton);

        cancelButton = new QPushButton(layoutWidget1);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_2->addWidget(cancelButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HeaderLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Welcome To Feds!</span></p></body></html>", nullptr));
        FileLocation->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter file location:</span></p></body></html>", nullptr));
        fileLocationLineEdit->setText(QString());
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("MainWindow", "decrypt", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
