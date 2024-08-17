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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *resultLabel;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *resetButtton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileLocationLine;
    QPushButton *browseButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *methodselectionLabel;
    QCheckBox *vigenereCheckBox;
    QCheckBox *railFenceCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *keyLabel;
    QLineEdit *KeyLine;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *punctuationCheckBox;
    QCheckBox *caseCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *depthLabel;
    QSpinBox *depthSpinBox;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName("SecondWindow");
        SecondWindow->resize(873, 509);
        resultLabel = new QLabel(SecondWindow);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(660, 460, 351, 91));
        textEdit = new QTextEdit(SecondWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 330, 821, 171));
        layoutWidget = new QWidget(SecondWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(520, 240, 311, 71));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(layoutWidget);
        encryptButton->setObjectName("encryptButton");

        horizontalLayout_6->addWidget(encryptButton);

        decryptButton = new QPushButton(layoutWidget);
        decryptButton->setObjectName("decryptButton");

        horizontalLayout_6->addWidget(decryptButton);

        resetButtton = new QPushButton(layoutWidget);
        resetButtton->setObjectName("resetButtton");

        horizontalLayout_6->addWidget(resetButtton);

        layoutWidget1 = new QWidget(SecondWindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 0, 801, 232));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fileLocationLine = new QLineEdit(layoutWidget1);
        fileLocationLine->setObjectName("fileLocationLine");

        horizontalLayout->addWidget(fileLocationLine);

        browseButton = new QPushButton(layoutWidget1);
        browseButton->setObjectName("browseButton");

        horizontalLayout->addWidget(browseButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        methodselectionLabel = new QLabel(layoutWidget1);
        methodselectionLabel->setObjectName("methodselectionLabel");

        horizontalLayout_2->addWidget(methodselectionLabel);

        vigenereCheckBox = new QCheckBox(layoutWidget1);
        vigenereCheckBox->setObjectName("vigenereCheckBox");

        horizontalLayout_2->addWidget(vigenereCheckBox);

        railFenceCheckBox = new QCheckBox(layoutWidget1);
        railFenceCheckBox->setObjectName("railFenceCheckBox");

        horizontalLayout_2->addWidget(railFenceCheckBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        keyLabel = new QLabel(layoutWidget1);
        keyLabel->setObjectName("keyLabel");

        horizontalLayout_3->addWidget(keyLabel);

        KeyLine = new QLineEdit(layoutWidget1);
        KeyLine->setObjectName("KeyLine");

        horizontalLayout_3->addWidget(KeyLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        punctuationCheckBox = new QCheckBox(layoutWidget1);
        punctuationCheckBox->setObjectName("punctuationCheckBox");

        horizontalLayout_4->addWidget(punctuationCheckBox);

        caseCheckBox = new QCheckBox(layoutWidget1);
        caseCheckBox->setObjectName("caseCheckBox");

        horizontalLayout_4->addWidget(caseCheckBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        depthLabel = new QLabel(layoutWidget1);
        depthLabel->setObjectName("depthLabel");

        horizontalLayout_5->addWidget(depthLabel);

        depthSpinBox = new QSpinBox(layoutWidget1);
        depthSpinBox->setObjectName("depthSpinBox");
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(10);

        horizontalLayout_5->addWidget(depthSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        resultLabel->setText(QString());
        encryptButton->setText(QCoreApplication::translate("SecondWindow", "Encrypt", nullptr));
        decryptButton->setText(QCoreApplication::translate("SecondWindow", "Decrypt", nullptr));
        resetButtton->setText(QCoreApplication::translate("SecondWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter file location:</span></p></body></html>", nullptr));
        browseButton->setText(QCoreApplication::translate("SecondWindow", "Browse", nullptr));
        methodselectionLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Select Method:</span></p></body></html>", nullptr));
        vigenereCheckBox->setText(QCoreApplication::translate("SecondWindow", "vigenere", nullptr));
        railFenceCheckBox->setText(QCoreApplication::translate("SecondWindow", "railFence", nullptr));
        keyLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter key:</span></p></body></html>", nullptr));
        punctuationCheckBox->setText(QCoreApplication::translate("SecondWindow", "Punctuation", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("SecondWindow", "Keep Case", nullptr));
        depthLabel->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Select depth:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
