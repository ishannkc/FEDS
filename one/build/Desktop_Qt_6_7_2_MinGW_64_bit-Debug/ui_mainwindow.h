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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *resetButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *methodSelection;
    QCheckBox *vignerecheckBox;
    QCheckBox *railFenceCheckbox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *KeyInput;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 676);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 410, 731, 241));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 451, 81));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(418, 340, 361, 61));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(widget);
        encryptButton->setObjectName("encryptButton");

        horizontalLayout_5->addWidget(encryptButton);

        decryptButton = new QPushButton(widget);
        decryptButton->setObjectName("decryptButton");

        horizontalLayout_5->addWidget(decryptButton);

        resetButton = new QPushButton(widget);
        resetButton->setObjectName("resetButton");

        horizontalLayout_5->addWidget(resetButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 100, 601, 221));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        browseButton = new QPushButton(widget1);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        methodSelection = new QLabel(widget1);
        methodSelection->setObjectName("methodSelection");

        horizontalLayout_2->addWidget(methodSelection);

        vignerecheckBox = new QCheckBox(widget1);
        vignerecheckBox->setObjectName("vignerecheckBox");

        horizontalLayout_2->addWidget(vignerecheckBox);

        railFenceCheckbox = new QCheckBox(widget1);
        railFenceCheckbox->setObjectName("railFenceCheckbox");
        railFenceCheckbox->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(railFenceCheckbox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        KeyInput = new QLineEdit(widget1);
        KeyInput->setObjectName("KeyInput");

        horizontalLayout_3->addWidget(KeyInput);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        horizontalLayout_4->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Welcome To Feds!</span></p></body></html>", nullptr));
        encryptButton->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter file location:</span></p></body></html>", nullptr));
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        methodSelection->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Choose Method:</span></p></body></html>", nullptr));
        vignerecheckBox->setText(QCoreApplication::translate("MainWindow", "Vigenere Cipher", nullptr));
        railFenceCheckbox->setText(QCoreApplication::translate("MainWindow", "Rail Fence Cipher", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter Key:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter Depth:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
