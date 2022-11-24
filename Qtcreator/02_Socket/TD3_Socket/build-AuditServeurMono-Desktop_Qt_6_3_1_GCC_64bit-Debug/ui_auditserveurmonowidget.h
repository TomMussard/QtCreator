/********************************************************************************
** Form generated from reading UI file 'auditserveurmonowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDITSERVEURMONOWIDGET_H
#define UI_AUDITSERVEURMONOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuditServeurMonoWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_numPort;
    QSpinBox *spinBox_port;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_lancement;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit_Information;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *AuditServeurMonoWidget)
    {
        if (AuditServeurMonoWidget->objectName().isEmpty())
            AuditServeurMonoWidget->setObjectName(QString::fromUtf8("AuditServeurMonoWidget"));
        AuditServeurMonoWidget->resize(281, 331);
        layoutWidget = new QWidget(AuditServeurMonoWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 264, 310));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_numPort = new QLabel(layoutWidget);
        label_numPort->setObjectName(QString::fromUtf8("label_numPort"));

        horizontalLayout->addWidget(label_numPort);

        spinBox_port = new QSpinBox(layoutWidget);
        spinBox_port->setObjectName(QString::fromUtf8("spinBox_port"));
        spinBox_port->setMaximum(10000);
        spinBox_port->setValue(8888);

        horizontalLayout->addWidget(spinBox_port);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_lancement = new QPushButton(layoutWidget);
        pushButton_lancement->setObjectName(QString::fromUtf8("pushButton_lancement"));

        verticalLayout_2->addWidget(pushButton_lancement);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        textEdit_Information = new QTextEdit(layoutWidget);
        textEdit_Information->setObjectName(QString::fromUtf8("textEdit_Information"));

        verticalLayout->addWidget(textEdit_Information);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        pushButton_Quitter = new QPushButton(layoutWidget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        verticalLayout_4->addWidget(pushButton_Quitter);


        retranslateUi(AuditServeurMonoWidget);
        QObject::connect(pushButton_Quitter, &QPushButton::clicked, AuditServeurMonoWidget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(AuditServeurMonoWidget);
    } // setupUi

    void retranslateUi(QWidget *AuditServeurMonoWidget)
    {
        AuditServeurMonoWidget->setWindowTitle(QCoreApplication::translate("AuditServeurMonoWidget", "AuditServeurMonoWidget", nullptr));
        label_numPort->setText(QCoreApplication::translate("AuditServeurMonoWidget", "Num\303\251ro de port :", nullptr));
        pushButton_lancement->setText(QCoreApplication::translate("AuditServeurMonoWidget", "Lancement serveur", nullptr));
        label->setText(QCoreApplication::translate("AuditServeurMonoWidget", "Informations", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("AuditServeurMonoWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuditServeurMonoWidget: public Ui_AuditServeurMonoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDITSERVEURMONOWIDGET_H
