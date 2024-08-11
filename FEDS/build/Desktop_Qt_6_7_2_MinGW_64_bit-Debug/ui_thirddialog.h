/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_thirdDialog
{
public:
    QLabel *substitutionLabel;
    QLabel *label;

    void setupUi(QDialog *thirdDialog)
    {
        if (thirdDialog->objectName().isEmpty())
            thirdDialog->setObjectName("thirdDialog");
        thirdDialog->resize(600, 350);
        substitutionLabel = new QLabel(thirdDialog);
        substitutionLabel->setObjectName("substitutionLabel");
        substitutionLabel->setGeometry(QRect(10, 0, 291, 91));
        label = new QLabel(thirdDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 100, 121, 51));

        retranslateUi(thirdDialog);

        QMetaObject::connectSlotsByName(thirdDialog);
    } // setupUi

    void retranslateUi(QDialog *thirdDialog)
    {
        thirdDialog->setWindowTitle(QCoreApplication::translate("thirdDialog", "Dialog", nullptr));
        substitutionLabel->setText(QCoreApplication::translate("thirdDialog", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700;\">Substitution</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("thirdDialog", "<html><head/><body><p><span style=\" font-size:20pt;\">Enter  key</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdDialog: public Ui_thirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
