#include "auditserveurmultiwidget.h"
#include "ui_auditserveurmultiwidget.h"

AuditServeurMultiWidget::AuditServeurMultiWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditServeurMultiWidget)
{
    ui->setupUi(this);
    socketEcouteServeur = new QTcpServer (this);
    socketEcouteServeur->setMaxPendingConnections(30);
    connect(socketEcouteServeur,&QTcpServer::newConnection,this,&AuditServeurMultiWidget::onQTcpServernewConnection);
    connect(socketEcouteServeur,&QTcpServer::acceptError,this,&::AuditServeurMultiWidget::onQTcpServeracceptError);
}

AuditServeurMultiWidget::~AuditServeurMultiWidget()
{
    delete socketEcouteServeur;
    delete ui;
}

void AuditServeurMultiWidget::on_pushButton_lancement_clicked()
{
    if(!socketEcouteServeur->listen(QHostAddress::Any,ui->spinBox_port->value()))
    {
        QString message ="Impossible de démarrer le serveur " + socketEcouteServeur->errorString();
        ui->textEdit_Information->append(message);
    }
    else
    {
        QList<QHostAddress> listeAdresses = QNetworkInterface::allAddresses();
        QList<QHostAddress>::iterator it;
        for(it = listeAdresses.begin(); it != listeAdresses.end();it++)
        {
            if(it->toIPv4Address())
                ui->textEdit_Information->append("Adresse serveur : " + it->toString());
        }
        ui->textEdit_Information->append("N° du port : " + QString::number(socketEcouteServeur->serverPort()));
        ui->pushButton_lancement->setEnabled(false);
        ui->spinBox_port->setEnabled(false);
    }
}

void AuditServeurMultiWidget::onQTcpServeracceptError(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    ui->textEdit_Information->append(socketEcouteServeur->errorString());
}

void AuditServeurMultiWidget::onQTcpServernewConnection()
{
    QTcpSocket *client;
    client = socketEcouteServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&::AuditServeurMultiWidget::onQTcpSocketreadyRead);
    connect(client,&QTcpSocket::connected,this,&AuditServeurMultiWidget::onQTcpSocketConnected);
    connect(client,&QTcpSocket::disconnected,this,&::AuditServeurMultiWidget::onQTcpSocketDisconnected);
    connect(client,&QTcpSocket::readyRead,this,&::AuditServeurMultiWidget::onQTcpSocketreadyRead);
    connect(client,&QTcpSocket::errorOccurred,this,&::AuditServeurMultiWidget::onQTcpSocketErrorOccurred);
    connect(client,&QTcpSocket::hostFound,this,&::AuditServeurMultiWidget::onQTcpSockethostFound);
    connect(client,&QTcpSocket::stateChanged,this,&::AuditServeurMultiWidget::onQTcpSocketStateChanged);
    connect(client,&QTcpSocket::aboutToClose,this,&::AuditServeurMultiWidget::onQTcpSocketAboutToClose);
    connect(client,&QTcpSocket::bytesWritten,this,&::AuditServeurMultiWidget::onQTcpSocketbytesWritten);

    listeSocketDialogueClient.append(client);
    QProcess *process = new QProcess(this);
    connect(process,&QProcess::readyReadStandardOutput,this,&::AuditServeurMultiWidget::onQProcess_readyReadStandardOutput);
    listeProcess.append(process);
    QHostAddress addresseClient = client->peerAddress();
    ui->textEdit_Information->append("Client : " + addresseClient.toString());
}

void AuditServeurMultiWidget::onQTcpSocketConnected()
{
    ui->textEdit_Information->append("Client connecté");
}

void AuditServeurMultiWidget::onQTcpSocketDisconnected()
{

    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());

    int indexClient = listeSocketDialogueClient.indexOf(client);

    listeProcess.removeAt(indexClient);

    disconnect(client,nullptr,this,nullptr);

    listeSocketDialogueClient.removeOne(client);
    client->deleteLater();
    ui->textEdit_Information->append("Client déconnecté");
}

void AuditServeurMultiWidget::onQTcpSocketreadyRead()
{

    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());

    int indexClient = listeSocketDialogueClient.indexOf(client);

    QProcess *process = listeProcess.at(indexClient);

    QChar commande;
    QString reponse;
    if(client->bytesAvailable())
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

void AuditServeurMultiWidget::onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError);
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    ui->textEdit_Information->append("Client : " + client->errorString());
}

void AuditServeurMultiWidget::onQTcpSockethostFound()
{
    ui->textEdit_Information->append("Host found");
}

void AuditServeurMultiWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    Q_UNUSED(socketState);
    switch (socketState) {
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_Information->append("The socket is not connected.");
        break;
    case QAbstractSocket::HostLookupState:
        ui->textEdit_Information->append("The socket is performing a host name lookup.");
        break;
    case QAbstractSocket::ConnectingState:
        ui->textEdit_Information->append("The socket has started establishing a connection.");
        break;
    case QAbstractSocket::ConnectedState:
        ui->textEdit_Information->append("A connection is established.");
        break;
    case QAbstractSocket::BoundState:
        ui->textEdit_Information->append("The socket is bound to an address and port.");
        break;
    case QAbstractSocket::ClosingState:
        ui->textEdit_Information->append("The socket is about to close (data may still be waiting to be written).");
        break;
    case QAbstractSocket::ListeningState:
        ui->textEdit_Information->append("For internal use only.");
        break;
    }
}

void AuditServeurMultiWidget::onQTcpSocketAboutToClose()
{
    ui->textEdit_Information->append("About to close");
}

void AuditServeurMultiWidget::onQTcpSocketbytesWritten(qint64 bytes)
{
    ui->textEdit_Information->append(QString::number(bytes)+"bytes written");
}

void AuditServeurMultiWidget::onQProcess_readyReadStandardOutput()
{
    QProcess * process = qobject_cast<QProcess *>(sender());
    int indexProcess = listeProcess.indexOf(process);

    QTcpSocket *client = listeSocketDialogueClient.at(indexProcess);

    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
        socketDialogueClient->write(reponse.toLatin1());
}
