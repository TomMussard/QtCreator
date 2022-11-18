/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_4;
    QSplitter *splitter_2;
    QLabel *label_ipserveur;
    QLineEdit *lineEdit_ipserveur;
    QSplitter *splitter_3;
    QLabel *label_port;
    QSpinBox *spinBox_portserveur;
    QSplitter *splitter;
    QLabel *label_text;
    QLineEdit *lineEdit_textenvoyer;
    QSplitter *splitter_5;
    QPushButton *pushButton_connection;
    QPushButton *pushButton_envoyer;
    QPushButton *pushButton_quitter;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *label_message;
    QTextEdit *textEdit_message;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(800, 600);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 146, 391, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(horizontalLayoutWidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_ipserveur = new QLabel(splitter_2);
        label_ipserveur->setObjectName(QString::fromUtf8("label_ipserveur"));
        splitter_2->addWidget(label_ipserveur);
        lineEdit_ipserveur = new QLineEdit(splitter_2);
        lineEdit_ipserveur->setObjectName(QString::fromUtf8("lineEdit_ipserveur"));
        lineEdit_ipserveur->setEnabled(true);
        splitter_2->addWidget(lineEdit_ipserveur);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_port = new QLabel(splitter_3);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        splitter_3->addWidget(label_port);
        spinBox_portserveur = new QSpinBox(splitter_3);
        spinBox_portserveur->setObjectName(QString::fromUtf8("spinBox_portserveur"));
        splitter_3->addWidget(spinBox_portserveur);
        splitter_4->addWidget(splitter_3);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_text = new QLabel(splitter);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        splitter->addWidget(label_text);
        lineEdit_textenvoyer = new QLineEdit(splitter);
        lineEdit_textenvoyer->setObjectName(QString::fromUtf8("lineEdit_textenvoyer"));
        splitter->addWidget(lineEdit_textenvoyer);
        splitter_4->addWidget(splitter);

        horizontalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(horizontalLayoutWidget);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        pushButton_connection = new QPushButton(splitter_5);
        pushButton_connection->setObjectName(QString::fromUtf8("pushButton_connection"));
        splitter_5->addWidget(pushButton_connection);
        pushButton_envoyer = new QPushButton(splitter_5);
        pushButton_envoyer->setObjectName(QString::fromUtf8("pushButton_envoyer"));
        pushButton_envoyer->setEnabled(false);
        splitter_5->addWidget(pushButton_envoyer);

        horizontalLayout->addWidget(splitter_5);

        pushButton_quitter = new QPushButton(horizontalLayoutWidget);
        pushButton_quitter->setObjectName(QString::fromUtf8("pushButton_quitter"));

        horizontalLayout->addWidget(pushButton_quitter);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(130, 240, 391, 221));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_message = new QLabel(widget1);
        label_message->setObjectName(QString::fromUtf8("label_message"));

        verticalLayout->addWidget(label_message);

        textEdit_message = new QTextEdit(widget1);
        textEdit_message->setObjectName(QString::fromUtf8("textEdit_message"));

        verticalLayout->addWidget(textEdit_message);


        retranslateUi(widget);
        QObject::connect(pushButton_quitter, &QPushButton::clicked, widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "widget", nullptr));
        label_ipserveur->setText(QCoreApplication::translate("widget", "IP Serveur", nullptr));
        lineEdit_ipserveur->setText(QCoreApplication::translate("widget", "172.18.58.135", nullptr));
        label_port->setText(QCoreApplication::translate("widget", "Port", nullptr));
        label_text->setText(QCoreApplication::translate("widget", "Text \303\240 envoyer", nullptr));
        pushButton_connection->setText(QCoreApplication::translate("widget", "Connection", nullptr));
        pushButton_envoyer->setText(QCoreApplication::translate("widget", "Envoyer", nullptr));
        pushButton_quitter->setText(QCoreApplication::translate("widget", "Quitter", nullptr));
        label_message->setText(QCoreApplication::translate("widget", "Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
