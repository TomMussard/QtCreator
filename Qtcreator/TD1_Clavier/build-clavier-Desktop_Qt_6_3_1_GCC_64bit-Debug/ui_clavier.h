/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clavier
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_11;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;

    void setupUi(QWidget *Clavier)
    {
        if (Clavier->objectName().isEmpty())
            Clavier->setObjectName(QString::fromUtf8("Clavier"));
        Clavier->resize(800, 600);
        verticalLayoutWidget = new QWidget(Clavier);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 150, 352, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 3, 2, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Clavier);

        QMetaObject::connectSlotsByName(Clavier);
    } // setupUi

    void retranslateUi(QWidget *Clavier)
    {
        Clavier->setWindowTitle(QCoreApplication::translate("Clavier", "Clavier", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Clavier", "Led Verte", nullptr));
        checkBox->setText(QCoreApplication::translate("Clavier", "Led Rouge", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Clavier", "7", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clavier", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Clavier", "2", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Clavier", "8", nullptr));
        pushButton->setText(QCoreApplication::translate("Clavier", "4", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Clavier", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Clavier", "Marche", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Clavier", "5", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Clavier", "3", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Clavier", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Clavier", "Arr\303\252t", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Clavier", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clavier: public Ui_Clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H
