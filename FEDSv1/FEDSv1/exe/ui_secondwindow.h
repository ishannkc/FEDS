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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QTextEdit *textEdit;
    QLineEdit *fileLocationLine;
    QLabel *methodselectionLabel;
    QLabel *label;
    QCheckBox *railFenceCheckBox;
    QPushButton *browseButton;
    QCheckBox *caseCheckBox;
    QLabel *depthLabel;
    QLineEdit *KeyLine;
    QCheckBox *punctuationCheckBox;
    QSpinBox *depthSpinBox;
    QCheckBox *vigenereCheckBox;
    QPushButton *resetButtton;
    QPushButton *decryptButton;
    QPushButton *encryptButton;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(712, 721);
        SecondWindow->setMaximumSize(QSize(712, 16777215));
        SecondWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(27,29,35,255)"));
        textEdit = new QTextEdit(SecondWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 400, 256, 192));
        QFont font;
        font.setFamilies({QString::fromUtf8("Lato")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"font: 9pt \"Lato\";\n"
"border-radius:30px;\n"
"background-color: rgb(34,36,44);\n"
"color:#dadada;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"QTextEdit:Hover {\n"
"background-color:rgb(48,50,62);\n"
"}"));
        fileLocationLine = new QLineEdit(SecondWindow);
        fileLocationLine->setObjectName("fileLocationLine");
        fileLocationLine->setGeometry(QRect(30, 100, 126, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Lato Light")});
        font1.setPointSize(9);
        font1.setWeight(QFont::Light);
        font1.setItalic(false);
        fileLocationLine->setFont(font1);
        fileLocationLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 300 9pt \"Lato Light\";\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#fff;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"QLineEdit:Hover{\n"
"background-color:rgb(48,50,62);\n"
"}"));
        methodselectionLabel = new QLabel(SecondWindow);
        methodselectionLabel->setObjectName("methodselectionLabel");
        methodselectionLabel->setGeometry(QRect(260, 140, 150, 29));
        methodselectionLabel->setFont(font);
        methodselectionLabel->setStyleSheet(QString::fromUtf8("color:#dadada;\n"
"font: 9pt \"Lato\";"));
        label = new QLabel(SecondWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 50, 196, 29));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#dadada;\n"
"font: 9pt \"Lato\";"));
        railFenceCheckBox = new QCheckBox(SecondWindow);
        railFenceCheckBox->setObjectName("railFenceCheckBox");
        railFenceCheckBox->setGeometry(QRect(500, 200, 71, 18));
        railFenceCheckBox->setFont(font);
        railFenceCheckBox->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"font: 9pt \"Lato\";\n"
"icon-color:black;"));
        browseButton = new QPushButton(SecondWindow);
        browseButton->setObjectName("browseButton");
        browseButton->setGeometry(QRect(550, 100, 40, 14));
        browseButton->setFont(font);
        browseButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 9pt \"Lato\";\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#FFF\n"
"}\n"
"QPushButton:Hover{\n"
"background-color:rgb(48,50,62);\n"
"}\n"
"\n"
"\n"
""));
        caseCheckBox = new QCheckBox(SecondWindow);
        caseCheckBox->setObjectName("caseCheckBox");
        caseCheckBox->setGeometry(QRect(260, 310, 99, 18));
        caseCheckBox->setFont(font);
        caseCheckBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"font: 9pt \"Lato\";\n"
"color:#fff\n"
"}\n"
"QCheckBox:Hover{\n"
"background-color:rbg(98,98,98);\n"
"\n"
"}"));
        depthLabel = new QLabel(SecondWindow);
        depthLabel->setObjectName("depthLabel");
        depthLabel->setGeometry(QRect(500, 230, 103, 23));
        depthLabel->setFont(font);
        depthLabel->setStyleSheet(QString::fromUtf8("color:#dadada;\n"
"color: rgb(218, 218, 218);\n"
"\n"
"font: 9pt \"Lato\";"));
        KeyLine = new QLineEdit(SecondWindow);
        KeyLine->setObjectName("KeyLine");
        KeyLine->setGeometry(QRect(20, 270, 126, 16));
        KeyLine->setFont(font1);
        KeyLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font: 300 9pt \"Lato Light\";\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#fff;\n"
"padding-left:10px;\n"
"padding-right:10px;\n"
"}\n"
"QLineEdit:Hover{\n"
"background-color:rgb(48,50,62);\n"
"}\n"
"\n"
"\n"
""));
        punctuationCheckBox = new QCheckBox(SecondWindow);
        punctuationCheckBox->setObjectName("punctuationCheckBox");
        punctuationCheckBox->setGeometry(QRect(30, 310, 141, 14));
        punctuationCheckBox->setFont(font);
        punctuationCheckBox->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"border-radius:60px;\n"
"border:none;font: 9pt \"Lato\";"));
        depthSpinBox = new QSpinBox(SecondWindow);
        depthSpinBox->setObjectName("depthSpinBox");
        depthSpinBox->setGeometry(QRect(500, 270, 38, 18));
        depthSpinBox->setFont(font);
        depthSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	font: 9pt \"Lato\";\n"
"\n"
"background-color: rgb(34,36,44);\n"
"color:#fff\n"
"}\n"
"QSpinBox:Hover {\n"
"background-color:rgb(48,50,62);\n"
"}\n"
"\n"
""));
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(10);
        vigenereCheckBox = new QCheckBox(SecondWindow);
        vigenereCheckBox->setObjectName("vigenereCheckBox");
        vigenereCheckBox->setGeometry(QRect(40, 200, 65, 18));
        vigenereCheckBox->setFont(font);
        vigenereCheckBox->setStyleSheet(QString::fromUtf8("color:#fff;\n"
"icon-color:black;\n"
"font: 9pt \"Lato\";"));
        resetButtton = new QPushButton(SecondWindow);
        resetButtton->setObjectName("resetButtton");
        resetButtton->setGeometry(QRect(570, 350, 31, 14));
        resetButtton->setFont(font);
        resetButtton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 9pt \"Lato\";\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#FFF\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(48,50,62);\n"
"}\n"
"\n"
""));
        decryptButton = new QPushButton(SecondWindow);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setGeometry(QRect(480, 350, 43, 14));
        decryptButton->setFont(font);
        decryptButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 9pt \"Lato\";\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#FFF\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(48,50,62);\n"
"}\n"
""));
        encryptButton = new QPushButton(SecondWindow);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(390, 350, 42, 14));
        encryptButton->setFont(font);
        encryptButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 9pt \"Lato\";\n"
"\n"
"border-radius:9.19px;\n"
"background-color: rgb(34,36,44);\n"
"color:#FFF\n"
"\n"
"}\n"
"\n"
"QPushButton:Hover {\n"
"background-color:rgb(48,50,62);\n"
"}\n"
"\n"
""));

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        fileLocationLine->setPlaceholderText(QCoreApplication::translate("SecondWindow", "Enter File Location", nullptr));
        methodselectionLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Select Method</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">Enter File Location</span></p></body></html>", nullptr));
        railFenceCheckBox->setText(QCoreApplication::translate("SecondWindow", "Railfence", nullptr));
        browseButton->setText(QCoreApplication::translate("SecondWindow", "Browse", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("SecondWindow", "Preserve Case", nullptr));
        depthLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Input Depth</span></p></body></html>", nullptr));
        KeyLine->setText(QString());
        KeyLine->setPlaceholderText(QCoreApplication::translate("SecondWindow", "Enter Key", nullptr));
        punctuationCheckBox->setText(QCoreApplication::translate("SecondWindow", "Preserve Punctutation", nullptr));
        vigenereCheckBox->setText(QCoreApplication::translate("SecondWindow", "Vign\303\250re", nullptr));
        resetButtton->setText(QCoreApplication::translate("SecondWindow", "Reset", nullptr));
        decryptButton->setText(QCoreApplication::translate("SecondWindow", "Decrypt", nullptr));
        encryptButton->setText(QCoreApplication::translate("SecondWindow", "Encrypt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
