/********************************************************************************
** Form generated from reading UI file 'detecteur.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTEUR_H
#define UI_DETECTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Detecteur
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Detecteur)
    {
        if (Detecteur->objectName().isEmpty())
            Detecteur->setObjectName(QString::fromUtf8("Detecteur"));
        Detecteur->resize(400, 300);
        pushButton = new QPushButton(Detecteur);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 311, 221));

        retranslateUi(Detecteur);

        QMetaObject::connectSlotsByName(Detecteur);
    } // setupUi

    void retranslateUi(QDialog *Detecteur)
    {
        Detecteur->setWindowTitle(QCoreApplication::translate("Detecteur", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Detecteur", "Pr\303\251sence d\303\251tect\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detecteur: public Ui_Detecteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTEUR_H
