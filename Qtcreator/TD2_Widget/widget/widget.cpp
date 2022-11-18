#include "widget.h"
#include "ui_widget.h"

widget::widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);
    // Desactiver bouton envoyer
    ui->pushButton_envoyer->setDisabled(true);
    // Desactiver text a envoyer
    ui->lineEdit_textenvoyer->setDisabled(true);
    // assotiation signal/slot pour sockVersServeur
    connect(&sockVersServeur,
            &QTcpSocket::connected,
            this,
            &widget::onQTcpSocketConnected
            );
    connect(&sockVersServeur,
            &QTcpSocket::disconnected,
            this,
            &widget::onQTcpSocketDisconnected
            );
    connect(&sockVersServeur,
            &::QTcpSocket::readyRead,
            this,
            &widget::onQTcpSocketReadyRead
            );
    connect(&sockVersServeur,
            &QTcpSocket::stateChanged,
            this,
            &widget::onQTcpSocketStateChanged
            );
    connect(&sockVersServeur,
            &QTcpSocket::errorOccurred,
            this,
            &widget::onQTcpSocketErrorOccured
            );



}

widget::~widget()
{
    delete ui;
}

void widget::on_pushButton_connection_clicked()
{
    sockVersServeur.connectToHost(
                ui->lineEdit_ipserveur->text(),
                ui->spinBox_portserveur->value()
                );
}

void widget::on_pushButton_envoyer_clicked()
{
    sockVersServeur.write(ui->lineEdit_textenvoyer->text().toUtf8()
                          );

}

void widget::onQTcpSocketConnected()
{
    qDebug()<<"Connected";
    // Desactiver bouton envoyer
    ui->pushButton_envoyer->setDisabled(false);
    // Desactiver text a envoyer
    ui->lineEdit_textenvoyer->setDisabled(false);
    // Desactiver bouton connection
    ui->pushButton_connection->setDisabled(true);
    // Desactiver le port
    ui->spinBox_portserveur->setDisabled(true);
    // Desactiver le port
    ui->lineEdit_ipserveur->setDisabled(true);
}

void widget::onQTcpSocketDisconnected()
{
    qDebug()<<"Disconnected";
    // Desactiver bouton envoyer
    ui->pushButton_envoyer->setDisabled(true);
    // Desactiver text a envoyer
    ui->lineEdit_textenvoyer->setDisabled(true);
    // Desactiver bouton connection
    ui->pushButton_connection->setDisabled(false);
    // Desactiver le port
    ui->spinBox_portserveur->setDisabled(false);
    // Desactiver le port
    ui->lineEdit_ipserveur->setDisabled(false);
}

void widget::onQTcpSocketReadyRead()
{
    QByteArray reponse;
    reponse=sockVersServeur.readAll();
    ui->textEdit_message->append(reponse);

}

void widget::onQTcpSocketStateChanged()
{
    switch (socketState)
    {
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_message->append("Is performing home state.");
                break;
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::ConnectedState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::BoundState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::ClosingState:
        ui->textEdit_message->append("the is not connected.");
                break;
    case QAbstractSocket::ListeningState:
        ui->textEdit_message->append("the is not connected.");
                break;

    }

}

void widget::onQTcpSocketErrorOccured(QAbstractSocket::SocketError socketError)
{
    ui->textEdit_message->append(sockVersServeur.errorString());
}
