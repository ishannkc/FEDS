/********************************************************************************
** Form generated from reading UI file 'methodselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METHODSELECTIONDIALOG_H
#define UI_METHODSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondDialog
{
public:
    QLabel *label;
    QSplitter *splitter;
    QRadioButton *substitutionRadioButton;
    QRadioButton *transpositionRadioButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *nextButton;
    QPushButton *backButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *secondDialog)
    {
        if (secondDialog->objectName().isEmpty())
            secondDialog->setObjectName("secondDialog");
        secondDialog->resize(600, 350);
        label = new QLabel(secondDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 371, 91));
        splitter = new QSplitter(secondDialog);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(20, 110, 281, 85));
        QFont font;
        font.setPointSize(20);
        splitter->setFont(font);
        splitter->setOrientation(Qt::Orientation::Vertical);
        substitutionRadioButton = new QRadioButton(splitter);
        substitutionRadioButton->setObjectName("substitutionRadioButton");
        splitter->addWidget(substitutionRadioButton);
        transpositionRadioButton = new QRadioButton(splitter);
        transpositionRadioButton->setObjectName("transpositionRadioButton");
        splitter->addWidget(transpositionRadioButton);
        layoutWidget = new QWidget(secondDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 280, 321, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        nextButton = new QPushButton(layoutWidget);
        nextButton->setObjectName("nextButton");

        horizontalLayout->addWidget(nextButton);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        horizontalLayout->addWidget(backButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(secondDialog);

        QMetaObject::connectSlotsByName(secondDialog);
    } // setupUi

    void retranslateUi(QDialog *secondDialog)
    {
        secondDialog->setWindowTitle(QCoreApplication::translate("secondDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secondDialog", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Select Methods</span></p></body></html>", nullptr));
        substitutionRadioButton->setText(QCoreApplication::translate("secondDialog", "Substitution(Vignere)", nullptr));
        transpositionRadioButton->setText(QCoreApplication::translate("secondDialog", "Transposition", nullptr));
        nextButton->setText(QCoreApplication::translate("secondDialog", "Next", nullptr));
        backButton->setText(QCoreApplication::translate("secondDialog", "Back", nullptr));
        cancelButton->setText(QCoreApplication::translate("secondDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondDialog: public Ui_secondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METHODSELECTIONDIALOG_H
