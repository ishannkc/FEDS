/********************************************************************************
** Form generated from reading UI file 'substitutiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBSTITUTIONDIALOG_H
#define UI_SUBSTITUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdDialog
{
public:
    QLabel *substitutionLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *enterKey;
    QLineEdit *keyLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *NextButton;
    QPushButton *BackButton;
    QPushButton *CancelButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QCheckBox *includeCommasCheckBox;
    QCheckBox *keepCaseCheckBox;

    void setupUi(QDialog *thirdDialog)
    {
        if (thirdDialog->objectName().isEmpty())
            thirdDialog->setObjectName("thirdDialog");
        thirdDialog->resize(600, 350);
        thirdDialog->setMinimumSize(QSize(1, 0));
        substitutionLabel = new QLabel(thirdDialog);
        substitutionLabel->setObjectName("substitutionLabel");
        substitutionLabel->setGeometry(QRect(10, 0, 291, 91));
        layoutWidget = new QWidget(thirdDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 100, 249, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        enterKey = new QLabel(layoutWidget);
        enterKey->setObjectName("enterKey");

        horizontalLayout->addWidget(enterKey);

        keyLineEdit = new QLineEdit(layoutWidget);
        keyLineEdit->setObjectName("keyLineEdit");

        horizontalLayout->addWidget(keyLineEdit);

        layoutWidget1 = new QWidget(thirdDialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(310, 270, 271, 71));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        NextButton = new QPushButton(layoutWidget1);
        NextButton->setObjectName("NextButton");

        horizontalLayout_2->addWidget(NextButton);

        BackButton = new QPushButton(layoutWidget1);
        BackButton->setObjectName("BackButton");

        horizontalLayout_2->addWidget(BackButton);

        CancelButton = new QPushButton(layoutWidget1);
        CancelButton->setObjectName("CancelButton");

        horizontalLayout_2->addWidget(CancelButton);

        layoutWidget2 = new QWidget(thirdDialog);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 170, 217, 88));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        includeCommasCheckBox = new QCheckBox(layoutWidget2);
        includeCommasCheckBox->setObjectName("includeCommasCheckBox");
        QFont font;
        font.setPointSize(20);
        includeCommasCheckBox->setFont(font);
        includeCommasCheckBox->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(includeCommasCheckBox);

        keepCaseCheckBox = new QCheckBox(layoutWidget2);
        keepCaseCheckBox->setObjectName("keepCaseCheckBox");
        keepCaseCheckBox->setFont(font);

        verticalLayout->addWidget(keepCaseCheckBox);


        retranslateUi(thirdDialog);

        QMetaObject::connectSlotsByName(thirdDialog);
    } // setupUi

    void retranslateUi(QDialog *thirdDialog)
    {
        thirdDialog->setWindowTitle(QCoreApplication::translate("thirdDialog", "Dialog", nullptr));
        substitutionLabel->setText(QCoreApplication::translate("thirdDialog", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Substitution</span></p></body></html>", nullptr));
        enterKey->setText(QCoreApplication::translate("thirdDialog", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter  key</span></p></body></html>", nullptr));
        NextButton->setText(QCoreApplication::translate("thirdDialog", "Next", nullptr));
        BackButton->setText(QCoreApplication::translate("thirdDialog", "Back", nullptr));
        CancelButton->setText(QCoreApplication::translate("thirdDialog", "Cancel", nullptr));
        includeCommasCheckBox->setText(QCoreApplication::translate("thirdDialog", "Include commas", nullptr));
        keepCaseCheckBox->setText(QCoreApplication::translate("thirdDialog", "Keep Case", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdDialog: public Ui_thirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBSTITUTIONDIALOG_H
