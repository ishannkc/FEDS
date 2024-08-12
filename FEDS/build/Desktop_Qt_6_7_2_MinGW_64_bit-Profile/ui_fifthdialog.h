/********************************************************************************
** Form generated from reading UI file 'fifthdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTHDIALOG_H
#define UI_FIFTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fifthDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fileLocLabel;
    QLineEdit *fileLocationLine;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *keyLabel;
    QLineEdit *KeyLline;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *depthLabel;
    QLineEdit *depthLine;

    void setupUi(QDialog *fifthDialog)
    {
        if (fifthDialog->objectName().isEmpty())
            fifthDialog->setObjectName("fifthDialog");
        fifthDialog->resize(600, 350);
        layoutWidget = new QWidget(fifthDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(290, 285, 301, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);

        confirmButton = new QPushButton(layoutWidget);
        confirmButton->setObjectName("confirmButton");

        horizontalLayout->addWidget(confirmButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        layoutWidget1 = new QWidget(fifthDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 40, 304, 38));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fileLocLabel = new QLabel(layoutWidget1);
        fileLocLabel->setObjectName("fileLocLabel");

        horizontalLayout_2->addWidget(fileLocLabel);

        fileLocationLine = new QLineEdit(layoutWidget1);
        fileLocationLine->setObjectName("fileLocationLine");

        horizontalLayout_2->addWidget(fileLocationLine);

        layoutWidget2 = new QWidget(fifthDialog);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(40, 90, 197, 38));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        keyLabel = new QLabel(layoutWidget2);
        keyLabel->setObjectName("keyLabel");

        horizontalLayout_3->addWidget(keyLabel);

        KeyLline = new QLineEdit(layoutWidget2);
        KeyLline->setObjectName("KeyLline");

        horizontalLayout_3->addWidget(KeyLline);

        layoutWidget3 = new QWidget(fifthDialog);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(40, 140, 220, 38));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        depthLabel = new QLabel(layoutWidget3);
        depthLabel->setObjectName("depthLabel");

        horizontalLayout_4->addWidget(depthLabel);

        depthLine = new QLineEdit(layoutWidget3);
        depthLine->setObjectName("depthLine");

        horizontalLayout_4->addWidget(depthLine);


        retranslateUi(fifthDialog);

        QMetaObject::connectSlotsByName(fifthDialog);
    } // setupUi

    void retranslateUi(QDialog *fifthDialog)
    {
        fifthDialog->setWindowTitle(QCoreApplication::translate("fifthDialog", "Dialog", nullptr));
        backButton->setText(QCoreApplication::translate("fifthDialog", "Back", nullptr));
        confirmButton->setText(QCoreApplication::translate("fifthDialog", "Confirm", nullptr));
        cancelButton->setText(QCoreApplication::translate("fifthDialog", "Cancel", nullptr));
        fileLocLabel->setText(QCoreApplication::translate("fifthDialog", "<html><head/><body><p><span style=\" font-size:20pt;\">File Location :</span></p></body></html>", nullptr));
        keyLabel->setText(QCoreApplication::translate("fifthDialog", "<html><head/><body><p><span style=\" font-size:20pt;\">Key :</span></p></body></html>", nullptr));
        depthLabel->setText(QCoreApplication::translate("fifthDialog", "<html><head/><body><p><span style=\" font-size:20pt;\">Depth:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fifthDialog: public Ui_fifthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTHDIALOG_H
