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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *FEDS;
    QPushButton *nextButton;
    QLabel *fileencryption;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(634, 311);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(27,29,35,255)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        FEDS = new QLabel(centralwidget);
        FEDS->setObjectName("FEDS");
        FEDS->setGeometry(QRect(-20, -30, 681, 271));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bebas Neue")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        FEDS->setFont(font);
        FEDS->setStyleSheet(QString::fromUtf8("color:#a7a7a7;\n"
"font: 9pt \"Bebas Neue\";"));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(260, 170, 121, 41));
        nextButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#FFF;font: 9pt \"Lato\";\n"
"}\n"
"QPushButton:Hover{\n"
"background-color:rgb(48,50,62);\n"
"}"));
        fileencryption = new QLabel(centralwidget);
        fileencryption->setObjectName("fileencryption");
        fileencryption->setGeometry(QRect(210, 130, 211, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bebas Neue")});
        font1.setPointSize(9);
        font1.setWeight(QFont::Light);
        font1.setItalic(false);
        fileencryption->setFont(font1);
        fileencryption->setStyleSheet(QString::fromUtf8("font: 300 9pt \"Bebas Neue\";\n"
"color:#a7a7a7;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        FEDS->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">FEDS</span></p></body></html>", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        fileencryption->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:400;\">File Encryption Decryption System</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
