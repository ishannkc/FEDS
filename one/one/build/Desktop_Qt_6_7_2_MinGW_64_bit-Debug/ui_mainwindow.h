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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QTextEdit *textEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *browseButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *vignerecheckBox;
    QCheckBox *railFenceCheckbox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *KeyInput;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        encryptButton = new QPushButton(centralwidget);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(260, 370, 75, 24));
        decryptButton = new QPushButton(centralwidget);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setGeometry(QRect(370, 350, 75, 24));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 410, 731, 131));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 100, 271, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        browseButton = new QPushButton(widget);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(100, 190, 320, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        vignerecheckBox = new QCheckBox(widget1);
        vignerecheckBox->setObjectName("vignerecheckBox");

        horizontalLayout_2->addWidget(vignerecheckBox);

        railFenceCheckbox = new QCheckBox(widget1);
        railFenceCheckbox->setObjectName("railFenceCheckbox");

        horizontalLayout_2->addWidget(railFenceCheckbox);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(40, 310, 181, 71));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        spinBox = new QSpinBox(widget2);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        horizontalLayout_4->addWidget(spinBox);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(90, 270, 190, 24));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        KeyInput = new QLineEdit(widget3);
        KeyInput->setObjectName("KeyInput");

        horizontalLayout_3->addWidget(KeyInput);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        encryptButton->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("MainWindow", "Decrypt", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter file location:", nullptr));
        browseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Choose Method", nullptr));
        vignerecheckBox->setText(QCoreApplication::translate("MainWindow", "Vigenere Cipher", nullptr));
        railFenceCheckbox->setText(QCoreApplication::translate("MainWindow", "Rail Fence Cipher", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter Depth", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Key", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
