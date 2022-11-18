/********************************************************************************
** Form generated from reading UI file 'auditclientwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDITCLIENTWIDGET_H
#define UI_AUDITCLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuditClientWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *centralWidget;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEditAdresseIP;
    QLabel *label;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonQuitter;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonConnexion;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QTextEdit *textEditEtat;
    QGroupBox *groupBoxInformationsClient;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButtonOrdinateur;
    QPushButton *pushButtonUtilisateur;
    QPushButton *pushButtonArchitecture;
    QPushButton *pushButtonOs;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEditArchitecture;
    QLineEdit *lineEditUtilisateur;
    QLineEdit *lineEditOs;
    QLineEdit *lineEditOrdinateur;

    void setupUi(QWidget *AuditClientWidget)
    {
        if (AuditClientWidget->objectName().isEmpty())
            AuditClientWidget->setObjectName(QString::fromUtf8("AuditClientWidget"));
        AuditClientWidget->resize(809, 600);
        verticalLayoutWidget = new QWidget(AuditClientWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 60, 681, 421));
        centralWidget = new QVBoxLayout(verticalLayoutWidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(7, 26, 661, 171));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditAdresseIP = new QLineEdit(horizontalLayoutWidget);
        lineEditAdresseIP->setObjectName(QString::fromUtf8("lineEditAdresseIP"));

        gridLayout->addWidget(lineEditAdresseIP, 2, 2, 1, 1);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditPort = new QLineEdit(horizontalLayoutWidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 3, 2, 1, 1);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButtonQuitter = new QPushButton(horizontalLayoutWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_6->addWidget(pushButtonQuitter);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButtonConnexion = new QPushButton(horizontalLayoutWidget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));

        horizontalLayout_6->addWidget(pushButtonConnexion);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        textEditEtat = new QTextEdit(horizontalLayoutWidget);
        textEditEtat->setObjectName(QString::fromUtf8("textEditEtat"));

        verticalLayout_4->addWidget(textEditEtat);


        horizontalLayout_2->addLayout(verticalLayout_4);


        centralWidget->addWidget(groupBox);

        groupBoxInformationsClient = new QGroupBox(verticalLayoutWidget);
        groupBoxInformationsClient->setObjectName(QString::fromUtf8("groupBoxInformationsClient"));
        groupBoxInformationsClient->setEnabled(false);
        horizontalLayoutWidget_3 = new QWidget(groupBoxInformationsClient);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 30, 661, 171));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButtonOrdinateur = new QPushButton(horizontalLayoutWidget_3);
        pushButtonOrdinateur->setObjectName(QString::fromUtf8("pushButtonOrdinateur"));

        verticalLayout_5->addWidget(pushButtonOrdinateur);

        pushButtonUtilisateur = new QPushButton(horizontalLayoutWidget_3);
        pushButtonUtilisateur->setObjectName(QString::fromUtf8("pushButtonUtilisateur"));

        verticalLayout_5->addWidget(pushButtonUtilisateur);

        pushButtonArchitecture = new QPushButton(horizontalLayoutWidget_3);
        pushButtonArchitecture->setObjectName(QString::fromUtf8("pushButtonArchitecture"));

        verticalLayout_5->addWidget(pushButtonArchitecture);

        pushButtonOs = new QPushButton(horizontalLayoutWidget_3);
        pushButtonOs->setObjectName(QString::fromUtf8("pushButtonOs"));

        verticalLayout_5->addWidget(pushButtonOs);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lineEditArchitecture = new QLineEdit(horizontalLayoutWidget_3);
        lineEditArchitecture->setObjectName(QString::fromUtf8("lineEditArchitecture"));
        lineEditArchitecture->setEnabled(false);

        verticalLayout_6->addWidget(lineEditArchitecture);

        lineEditUtilisateur = new QLineEdit(horizontalLayoutWidget_3);
        lineEditUtilisateur->setObjectName(QString::fromUtf8("lineEditUtilisateur"));

        verticalLayout_6->addWidget(lineEditUtilisateur);

        lineEditOs = new QLineEdit(horizontalLayoutWidget_3);
        lineEditOs->setObjectName(QString::fromUtf8("lineEditOs"));

        verticalLayout_6->addWidget(lineEditOs);

        lineEditOrdinateur = new QLineEdit(horizontalLayoutWidget_3);
        lineEditOrdinateur->setObjectName(QString::fromUtf8("lineEditOrdinateur"));

        verticalLayout_6->addWidget(lineEditOrdinateur);


        horizontalLayout_3->addLayout(verticalLayout_6);


        centralWidget->addWidget(groupBoxInformationsClient);


        retranslateUi(AuditClientWidget);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, AuditClientWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(AuditClientWidget);
    } // setupUi

    void retranslateUi(QWidget *AuditClientWidget)
    {
        AuditClientWidget->setWindowTitle(QCoreApplication::translate("AuditClientWidget", "AuditClientWidget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AuditClientWidget", "Connexioin au serveur", nullptr));
        lineEditAdresseIP->setText(QCoreApplication::translate("AuditClientWidget", "172.0.0.1", nullptr));
        label->setText(QCoreApplication::translate("AuditClientWidget", "Adresse IP du serveur :", nullptr));
        lineEditPort->setText(QCoreApplication::translate("AuditClientWidget", "1025", nullptr));
        label_2->setText(QCoreApplication::translate("AuditClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("AuditClientWidget", "Quitter", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("AuditClientWidget", "Connexion", nullptr));
        label_3->setText(QCoreApplication::translate("AuditClientWidget", "Etat de la connexion", nullptr));
        groupBoxInformationsClient->setTitle(QCoreApplication::translate("AuditClientWidget", "Informations Client", nullptr));
        pushButtonOrdinateur->setText(QCoreApplication::translate("AuditClientWidget", "Nom de l'ordianteur distant", nullptr));
        pushButtonUtilisateur->setText(QCoreApplication::translate("AuditClientWidget", "Nom de l'utilisateur", nullptr));
        pushButtonArchitecture->setText(QCoreApplication::translate("AuditClientWidget", "Architecture processeur", nullptr));
        pushButtonOs->setText(QCoreApplication::translate("AuditClientWidget", "Os de l'ordinateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuditClientWidget: public Ui_AuditClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDITCLIENTWIDGET_H
