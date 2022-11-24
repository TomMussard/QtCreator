#include "auditserveurmonowidget.h"
#include "ui_auditserveurmonowidget.h"

AuditServeurMonoWidget::AuditServeurMonoWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditServeurMonoWidget)
{
    ui->setupUi(this);
    sockEcouteServeur = new QTcpServer;
    sockEcouteServeur->setMaxPendingConnections(1);
    connect(sockEcouteServeur,&QTcpServer::newConnection, this, &AuditServeurMonoWidget::onQTcpServernewConnection);
    connect(sockEcouteServeur,&QTcpServer::acceptError, this, &AuditServeurMonoWidget::onQTcpServeracceptError);

    process = new QProcess(this);
    connect(process,&QProcess::readyReadStandardOutput,this,&AuditServeurMonoWidget::onQProcess_readyReadStandardOutput);
}

AuditServeurMonoWidget::~AuditServeurMonoWidget()
{
    if (socketDialogueClient != nullptr)
    {
        socketDialogueClient->close();
        delete socketDialogueClient;
    }
    delete sockEcouteServeur;
    delete ui;
}


void AuditServeurMonoWidget::on_pushButton_lancement_clicked()
{
    if(!sockEcouteServeur->listen(QHostAddress::Any, ui->spinBox_port->value()))
    {
        QString message = "Impossible de démarrer le serveur" + sockEcouteServeur->errorString();
        ui->textEdit_Information->append(message);
    }
    else
    {
        QList<QHostAddress> listeAdreses = QNetworkInterface::allAddresses();
        QList<QHostAddress>::iterator it;
        for (it = listeAdreses.begin(); it != listeAdreses.end(); it++)
        {
            if(it->toIPv4Address())
                ui->textEdit_Information->append("Adrese serveur :" + it->toString());
        }
        ui->textEdit_Information->append("N° du port : " + QString::number(sockEcouteServeur->serverPort()));
        ui->pushButton_lancement->setEnabled(false);
        ui->spinBox_port->setEnabled(false);
    }
}

void AuditServeurMonoWidget::onQTcpServeracceptError(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
        ui->textEdit_Information->append(sockEcouteServeur->errorString());
}

void AuditServeurMonoWidget::onQTcpServernewConnection()
{
    ui->textEdit_Information->append("nouvelle connexion");

       if(socketDialogueClient != nullptr){
           socketDialogueClient->close();
           delete socketDialogueClient;
       }
       socketDialogueClient=sockEcouteServeur->nextPendingConnection();

       connect(socketDialogueClient, &QTcpSocket::connected,this,&::AuditServeurMonoWidget::onQTcpSocketConnected);
       connect(socketDialogueClient, &QTcpSocket::disconnected,this,&::AuditServeurMonoWidget::onQTcpSocketDisconnected);
       connect(socketDialogueClient, &QTcpSocket::readyRead,this,&AuditServeurMonoWidget::onQTcpSocketreadyRead);
       connect(socketDialogueClient, &QTcpSocket::stateChanged,this,&AuditServeurMonoWidget::onQTcpSocketStateChanged);
       connect(socketDialogueClient, &QTcpSocket::errorOccurred,this,&AuditServeurMonoWidget::onQTcpSocketErrorOccurred);
       connect(socketDialogueClient, &QTcpSocket::hostFound,this,&AuditServeurMonoWidget::onQTcpSockethostFound);
       connect(socketDialogueClient, &QTcpSocket::aboutToClose,this,&::AuditServeurMonoWidget::onQTcpSocketAboutToClose);
       connect(socketDialogueClient, &QTcpSocket::bytesWritten,this,&AuditServeurMonoWidget::onQTcpSocketbytesWritten);

       QHostAddress addresseClient = socketDialogueClient->peerAddress();
       ui->textEdit_Information->append("Client : " +addresseClient.toString());
}

void AuditServeurMonoWidget::onQTcpSocketConnected()
{
    ui->textEdit_Information->append("connexion");
}

void AuditServeurMonoWidget::onQTcpSocketDisconnected()
{
    disconnect(socketDialogueClient,nullptr,this,nullptr);
    socketDialogueClient->deleteLater();
    socketDialogueClient = nullptr;
    ui->textEdit_Information->append("Client détconnecté");
}

void AuditServeurMonoWidget::onQTcpSocketreadyRead()
{
    QChar commande;
    QString reponse;
    if(socketDialogueClient->bytesAvailable())
    {
        QByteArray tampon = socketDialogueClient->readAll();
        commande = tampon.at(0);
        QString message = "Commande reçu de " + socketDialogueClient->peerAddress().toString() + " :";
        message += commande;
        ui->textEdit_Information->append(message);
        switch (commande.toLatin1())
        {
        case 'u' : reponse = getenv("USER");
            socketDialogueClient->write(reponse.toLatin1());
            break;

        case 'a' :
            process->start("uname",QStringList("-p"));
            break;

        case 'c' : reponse = QHostInfo::localHostName();
            socketDialogueClient->write(reponse.toLatin1());
            break;

        case 'o' :
            process->start("uname");
            break;
        }
    }

}

void AuditServeurMonoWidget::onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
    ui->textEdit_Information->append(sockEcouteServeur->errorString());
}

void AuditServeurMonoWidget::onQTcpSockethostFound()
{
    ui->textEdit_Information->append("host found");
}

void AuditServeurMonoWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState) {
       case QAbstractSocket::UnconnectedState:
           ui ->textEdit_Information->append("The socket is not connected.");
           break;
       case QAbstractSocket::HostLookupState:
           ui ->textEdit_Information->append("The socket is performing a host name lookup.");
           break;
       case QAbstractSocket::ConnectingState:
           ui ->textEdit_Information->append("The socket has started establishing a connection.");
           break;
       case QAbstractSocket::ConnectedState:
           ui ->textEdit_Information->append("A connection is established.");
           break;
       case QAbstractSocket::BoundState:
           ui ->textEdit_Information->append("The socket is bound to an address and port.");
           break;
       case QAbstractSocket::ClosingState:
           ui ->textEdit_Information->append("The socket is about to close (data may still be waiting to be written).");
           break;
       case QAbstractSocket::ListeningState:
           ui ->textEdit_Information->append("For internal use only.");
           break;
       }
}

void AuditServeurMonoWidget::onQTcpSocketAboutToClose()
{
    ui->textEdit_Information->append("host found");
}

void AuditServeurMonoWidget::onQTcpSocketbytesWritten(qint64 bytes)
{
    ui->textEdit_Information->append(QString::number(bytes)+" bytes written on chanel");
}

void AuditServeurMonoWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
        if(!reponse.isEmpty())
            socketDialogueClient->write(reponse.toLatin1());
}

void AuditServeurMonoWidget::on_pushButton_Quitter_clicked()
{
    close();
}

