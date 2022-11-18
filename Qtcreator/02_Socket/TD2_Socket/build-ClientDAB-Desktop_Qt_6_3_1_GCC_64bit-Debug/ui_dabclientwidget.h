/********************************************************************************
** Form generated from reading UI file 'dabclientwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DABCLIENTWIDGET_H
#define UI_DABCLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DabClientWidget
{
public:
    QGroupBox *groupBoxOP;
    QPushButton *pushButton_Envoi;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_Solde;
    QRadioButton *radioButton_Retrait;
    QRadioButton *radioButton_Depot;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_NumeroCompte;
    QLineEdit *lineEdit_numerocompte;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_montant;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEdit_adresse;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_port;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_connexion;
    QPushButton *pushButton_quitter;
    QSpacerItem *horizontalSpacer;
    QTextEdit *textEdit_etat;
    QLabel *label_4;
    QLineEdit *lineEdit_message;

    void setupUi(QWidget *DabClientWidget)
    {
        if (DabClientWidget->objectName().isEmpty())
            DabClientWidget->setObjectName(QString::fromUtf8("DabClientWidget"));
        DabClientWidget->resize(789, 514);
        groupBoxOP = new QGroupBox(DabClientWidget);
        groupBoxOP->setObjectName(QString::fromUtf8("groupBoxOP"));
        groupBoxOP->setEnabled(false);
        groupBoxOP->setGeometry(QRect(20, 250, 751, 251));
        pushButton_Envoi = new QPushButton(groupBoxOP);
        pushButton_Envoi->setObjectName(QString::fromUtf8("pushButton_Envoi"));
        pushButton_Envoi->setGeometry(QRect(610, 170, 111, 61));
        verticalLayoutWidget = new QWidget(groupBoxOP);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(620, 50, 81, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_Solde = new QRadioButton(verticalLayoutWidget);
        radioButton_Solde->setObjectName(QString::fromUtf8("radioButton_Solde"));

        verticalLayout->addWidget(radioButton_Solde);

        radioButton_Retrait = new QRadioButton(verticalLayoutWidget);
        radioButton_Retrait->setObjectName(QString::fromUtf8("radioButton_Retrait"));

        verticalLayout->addWidget(radioButton_Retrait);

        radioButton_Depot = new QRadioButton(verticalLayoutWidget);
        radioButton_Depot->setObjectName(QString::fromUtf8("radioButton_Depot"));

        verticalLayout->addWidget(radioButton_Depot);

        verticalLayoutWidget_2 = new QWidget(groupBoxOP);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 30, 501, 201));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_NumeroCompte = new QPushButton(verticalLayoutWidget_2);
        pushButton_NumeroCompte->setObjectName(QString::fromUtf8("pushButton_NumeroCompte"));

        horizontalLayout_3->addWidget(pushButton_NumeroCompte);

        lineEdit_numerocompte = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_numerocompte->setObjectName(QString::fromUtf8("lineEdit_numerocompte"));

        horizontalLayout_3->addWidget(lineEdit_numerocompte);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_montant = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_montant->setObjectName(QString::fromUtf8("lineEdit_montant"));

        horizontalLayout->addWidget(lineEdit_montant);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayoutWidget_3 = new QWidget(DabClientWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 20, 751, 224));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        verticalLayout_3->addLayout(verticalLayout_7);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        lineEdit_adresse = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_adresse->setObjectName(QString::fromUtf8("lineEdit_adresse"));

        horizontalLayout_5->addWidget(lineEdit_adresse);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_port = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));

        horizontalLayout_6->addWidget(lineEdit_port);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButton_connexion = new QPushButton(verticalLayoutWidget_3);
        pushButton_connexion->setObjectName(QString::fromUtf8("pushButton_connexion"));

        verticalLayout_6->addWidget(pushButton_connexion);

        pushButton_quitter = new QPushButton(verticalLayoutWidget_3);
        pushButton_quitter->setObjectName(QString::fromUtf8("pushButton_quitter"));

        verticalLayout_6->addWidget(pushButton_quitter);


        verticalLayout_4->addLayout(verticalLayout_6);


        horizontalLayout_4->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        textEdit_etat = new QTextEdit(verticalLayoutWidget_3);
        textEdit_etat->setObjectName(QString::fromUtf8("textEdit_etat"));

        horizontalLayout_4->addWidget(textEdit_etat);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        lineEdit_message = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));

        verticalLayout_3->addWidget(lineEdit_message);


        retranslateUi(DabClientWidget);
        QObject::connect(pushButton_quitter, &QPushButton::clicked, DabClientWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(DabClientWidget);
    } // setupUi

    void retranslateUi(QWidget *DabClientWidget)
    {
        DabClientWidget->setWindowTitle(QCoreApplication::translate("DabClientWidget", "DabClientWidget", nullptr));
        groupBoxOP->setTitle(QCoreApplication::translate("DabClientWidget", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButton_Envoi->setText(QCoreApplication::translate("DabClientWidget", "Envoi", nullptr));
        radioButton_Solde->setText(QCoreApplication::translate("DabClientWidget", "Solde", nullptr));
        radioButton_Retrait->setText(QCoreApplication::translate("DabClientWidget", "Retrait", nullptr));
        radioButton_Depot->setText(QCoreApplication::translate("DabClientWidget", "D\303\251pot", nullptr));
        pushButton_NumeroCompte->setText(QCoreApplication::translate("DabClientWidget", "Num\303\251ro de compte", nullptr));
        label->setText(QCoreApplication::translate("DabClientWidget", "Montant :", nullptr));
        label_5->setText(QCoreApplication::translate("DabClientWidget", "                                                                                                                                                                     Etat de la connexion", nullptr));
        label_2->setText(QCoreApplication::translate("DabClientWidget", "Adresse :", nullptr));
        lineEdit_adresse->setText(QCoreApplication::translate("DabClientWidget", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("DabClientWidget", "Port :", nullptr));
        lineEdit_port->setText(QCoreApplication::translate("DabClientWidget", "8888", nullptr));
        pushButton_connexion->setText(QCoreApplication::translate("DabClientWidget", "Connexion", nullptr));
        pushButton_quitter->setText(QCoreApplication::translate("DabClientWidget", "Quitter", nullptr));
        label_4->setText(QCoreApplication::translate("DabClientWidget", "Message de la banque", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DabClientWidget: public Ui_DabClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DABCLIENTWIDGET_H
