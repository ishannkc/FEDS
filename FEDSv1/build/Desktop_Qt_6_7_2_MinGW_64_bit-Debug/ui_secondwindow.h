/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QTextEdit *textEdit;
    QLabel *logo;
    QLineEdit *fileLocationLine;
    QLabel *methodselectionLabel;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *resetButtton;
    QCheckBox *railFenceCheckBox;
    QPushButton *browseButton;
    QCheckBox *caseCheckBox;
    QLabel *depthLabel;
    QLineEdit *KeyLine;
    QCheckBox *punctuationCheckBox;
    QSpinBox *depthSpinBox;
    QLabel *keyLabel;
    QCheckBox *vigenereCheckBox;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(856, 689);
        SecondWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
""));
        textEdit = new QTextEdit(SecondWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 490, 821, 171));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border-radius:30px;\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"}\n"
"QTextEdit:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}"));
        logo = new QLabel(SecondWindow);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(10, 0, 311, 161));
        logo->setScaledContents(true);
        fileLocationLine = new QLineEdit(SecondWindow);
        fileLocationLine->setObjectName("fileLocationLine");
        fileLocationLine->setGeometry(QRect(310, 180, 431, 31));
        fileLocationLine->setFont(font);
        fileLocationLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:9.19px;\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"border-bottom:1.8px solid rgb(61,61,61);\n"
"}\n"
"QLineEdit:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}"));
        methodselectionLabel = new QLabel(SecondWindow);
        methodselectionLabel->setObjectName("methodselectionLabel");
        methodselectionLabel->setGeometry(QRect(40, 230, 217, 44));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        methodselectionLabel->setFont(font1);
        methodselectionLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 9pt \"Arial\";\n"
""));
        label = new QLabel(SecondWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 170, 251, 41));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 9pt \"Arial\";"));
        widget = new QWidget(SecondWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(560, 440, 251, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(widget);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setFont(font);
        encryptButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:9.19px;\n"
"	background-color: rgb(98, 98, 98);\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"max-width:80px;\n"
"max-height:29px;\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(encryptButton);

        decryptButton = new QPushButton(widget);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setFont(font);
        decryptButton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:9.19px;\n"
"	background-color: rgb(98, 98, 98);\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"max-width:80px;\n"
"max-height:29px;\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}\n"
""));

        horizontalLayout->addWidget(decryptButton);

        resetButtton = new QPushButton(widget);
        resetButtton->setObjectName("resetButtton");
        resetButtton->setFont(font);
        resetButtton->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:9.19px;\n"
"	background-color: rgb(98, 98, 98);\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"max-width:80px;\n"
"max-height:29px;\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(resetButtton);

        railFenceCheckBox = new QCheckBox(SecondWindow);
        railFenceCheckBox->setObjectName("railFenceCheckBox");
        railFenceCheckBox->setGeometry(QRect(520, 240, 88, 26));
        railFenceCheckBox->setFont(font);
        railFenceCheckBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"icon-color:black;"));
        browseButton = new QPushButton(SecondWindow);
        browseButton->setObjectName("browseButton");
        browseButton->setGeometry(QRect(750, 180, 81, 31));
        browseButton->setFont(font);
        browseButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:9.19px;\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"}\n"
"QPushButton:Hover{\n"
"background-color:rgb(98,98,98);\n"
"}\n"
"\n"
"\n"
""));
        caseCheckBox = new QCheckBox(SecondWindow);
        caseCheckBox->setObjectName("caseCheckBox");
        caseCheckBox->setGeometry(QRect(520, 330, 121, 26));
        caseCheckBox->setFont(font);
        caseCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"color:black;\n"
"}\n"
"QCheckBox:Hover{\n"
"background-color:rbg(98,98,98);\n"
"\n"
"}"));
        depthLabel = new QLabel(SecondWindow);
        depthLabel->setObjectName("depthLabel");
        depthLabel->setGeometry(QRect(40, 370, 187, 44));
        depthLabel->setFont(font1);
        depthLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 9pt \"Arial\";"));
        KeyLine = new QLineEdit(SecondWindow);
        KeyLine->setObjectName("KeyLine");
        KeyLine->setGeometry(QRect(310, 290, 481, 28));
        KeyLine->setFont(font);
        KeyLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:9.19px;\n"
"background-color: rgb(169,169,169);\n"
"color:black;\n"
"}\n"
"QLineEdit:Hover{\n"
"background-color:rgb(97,97,97);\n"
"}\n"
"\n"
""));
        punctuationCheckBox = new QCheckBox(SecondWindow);
        punctuationCheckBox->setObjectName("punctuationCheckBox");
        punctuationCheckBox->setGeometry(QRect(310, 330, 171, 26));
        punctuationCheckBox->setFont(font);
        punctuationCheckBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"border-radius:60px;\n"
"border:none;"));
        depthSpinBox = new QSpinBox(SecondWindow);
        depthSpinBox->setObjectName("depthSpinBox");
        depthSpinBox->setGeometry(QRect(310, 380, 491, 29));
        depthSpinBox->setFont(font);
        depthSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"color:black;\n"
"background-color: rgb(169,169,169);\n"
"padding:0px;\n"
"}\n"
"QSpinBox:Hover {\n"
"background-color:rgb(98,98,98)\n"
"}"));
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(10);
        keyLabel = new QLabel(SecondWindow);
        keyLabel->setObjectName("keyLabel");
        keyLabel->setGeometry(QRect(40, 280, 140, 44));
        keyLabel->setStyleSheet(QString::fromUtf8("color:black;\n"
"font: 9pt \"Arial\";\n"
""));
        vigenereCheckBox = new QCheckBox(SecondWindow);
        vigenereCheckBox->setObjectName("vigenereCheckBox");
        vigenereCheckBox->setGeometry(QRect(310, 240, 86, 26));
        vigenereCheckBox->setFont(font);
        vigenereCheckBox->setStyleSheet(QString::fromUtf8("color:black;\n"
"icon-color:black;"));

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        logo->setText(QString());
        methodselectionLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Select Method</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Enter File Location</span></p></body></html>", nullptr));
        encryptButton->setText(QCoreApplication::translate("SecondWindow", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("SecondWindow", "Decrypt", nullptr));
        resetButtton->setText(QCoreApplication::translate("SecondWindow", "Reset", nullptr));
        railFenceCheckBox->setText(QCoreApplication::translate("SecondWindow", "Railfence", nullptr));
        browseButton->setText(QCoreApplication::translate("SecondWindow", "Browse", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("SecondWindow", "Preserve Case", nullptr));
        depthLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Select Depth</span></p></body></html>", nullptr));
        punctuationCheckBox->setText(QCoreApplication::translate("SecondWindow", "Preserve Punctutation", nullptr));
        keyLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Enter Key</span></p></body></html>", nullptr));
        vigenereCheckBox->setText(QCoreApplication::translate("SecondWindow", "Vign\303\250re", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
