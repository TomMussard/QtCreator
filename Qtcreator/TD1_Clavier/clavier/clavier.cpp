#include "clavier.h"
#include "ui_clavier.h"
#include <detecteur.h>
#include <QMessageBox>

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_10,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_11,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_12,&QPushButton::clicked,this,&Clavier::TraiterChiffre);

    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
}

Clavier::~Clavier()
{
    delete ui;
}


void Clavier::on_pushButton_7_clicked()
{
    QString textBouton = ui->pushButton_7->text();
    QMessageBox messageMarche;
    messageMarche.setText("J'ai appuyer sur la touche " + textBouton);
    messageMarche.exec();
}


void Clavier::TraiterChiffre()
{
    QPushButton *pBouton = static_cast<QPushButton *>(sender());
    QString textBouton = pBouton->text();
    QMessageBox messageMarche;
    messageMarche.setText("J'ai appuyer sur la touche " + textBouton);
    messageMarche.exec();

}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBox_2->checkState() == Qt::Checked)
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    else
    ui->checkBox_2->setCheckState(Qt::Checked);
}


void Clavier::on_pushButton_4_clicked()
{

}


void Clavier::on_pushButton_5_clicked()
{

}

