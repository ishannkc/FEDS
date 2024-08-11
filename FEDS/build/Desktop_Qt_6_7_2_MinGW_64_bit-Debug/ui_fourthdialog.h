/********************************************************************************
** Form generated from reading UI file 'fourthdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHDIALOG_H
#define UI_FOURTHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_fourthDialog
{
public:

    void setupUi(QDialog *fourthDialog)
    {
        if (fourthDialog->objectName().isEmpty())
            fourthDialog->setObjectName("fourthDialog");
        fourthDialog->resize(600, 350);

        retranslateUi(fourthDialog);

        QMetaObject::connectSlotsByName(fourthDialog);
    } // setupUi

    void retranslateUi(QDialog *fourthDialog)
    {
        fourthDialog->setWindowTitle(QCoreApplication::translate("fourthDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fourthDialog: public Ui_fourthDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHDIALOG_H
