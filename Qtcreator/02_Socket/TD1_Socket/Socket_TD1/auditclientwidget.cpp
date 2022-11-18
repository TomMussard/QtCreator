#include "auditclientwidget.h"
#include "ui_auditclientwidget.h"
#include <QDebug>

AuditClientWidget::AuditClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuditClientWidget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur=new QTcpSocket (this);

    connect(socketDeDialogueAvecServeur,&QTcpSocket::connected,this,&::AuditClientWidget::onQTcpSocketConnecetd);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::disconnected,this,&::AuditClientWidget::onQTcpSocketDisconnecetd);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readyRead,this,&::AuditClientWidget::onQTcpSocketReadyRead);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::errorOccurred,this,&::AuditClientWidget::onQTcpSocketErrorOccured);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::stateChanged,this,&::AuditClientWidget::onQTcpSocketStateChanged);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readyRead,this,&::AuditClientWidget::onQTcpSocketReadyRead);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::aboutToClose,this,&::AuditClientWidget::onQTcpSocketAboutToClose);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::bytesWritten,this,&::AuditClientWidget::onQTcpSocketBytesWritten);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::channelBytesWritten,this,&::AuditClientWidget::onQTcpSocketChannelBytesWritten);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::channelReadyRead,this,&::AuditClientWidget::onQTcpSocketReadChannelFinished);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readChannelFinished,this,&::AuditClientWidget::onQTcpSocketReadChannelFinished);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::destroyed,this,&::AuditClientWidget::onQTcpSocketDestroyed);
}

AuditClientWidget::~AuditClientWidget()
{
    if(socketDeDialogueAvecServeur != nullptr)
    {
        socketDeDialogueAvecServeur->close();
        delete socketDeDialogueAvecServeur;
    }
    delete ui;
}


void AuditClientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text()=="Connexion")
    {
        socketDeDialogueAvecServeur->connectToHost( ui->lineEditAdresseIP->text(),ui->lineEditPort->text().toInt() );
    }
    else
    {
        socketDeDialogueAvecServeur->disconnectFromHost();
    }

}


void AuditClientWidget::on_pushButtonOrdinateur_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}


void AuditClientWidget::on_pushButtonUtilisateur_clicked()
{
    typeDeDemande="u";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}


void AuditClientWidget::on_pushButtonArchitecture_clicked()
{
    typeDeDemande="a";
        socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}


void AuditClientWidget::on_pushButtonOs_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void AuditClientWidget::onQTcpSocketConnecetd()
{
    ui->textEditEtat->append("Connected");
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->lineEditAdresseIP->setEnabled(false);
    ui->lineEditPort->setEnabled(false);
    ui->groupBoxInformationsClient->setEnabled(true);

    ui->pushButtonOs->setEnabled(true);
    ui->pushButtonArchitecture->setEnabled(true);
    ui->pushButtonOrdinateur->setEnabled(true);
    ui->pushButtonConnexion->setEnabled(true);
}

void AuditClientWidget::onQTcpSocketDisconnecetd()
{
    ui->textEditEtat->append("Disconnected");
        ui->lineEditAdresseIP->setEnabled(true);
        ui->lineEditAdresseIP->setEnabled(true);
        ui->pushButtonConnexion->setText("Connexion");
        ui->groupBoxInformationsClient->setEnabled(false);
}

void AuditClientWidget::onQTcpSocketReadyRead()
{


}

void AuditClientWidget::onQTcpSocketErrorOccured(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
        ui->textEditEtat->append(socketDeDialogueAvecServeur->errorString());
}

void AuditClientWidget::onQTcpSocketHostFound()
{
    ui->textEditEtat->append("host found");

}

void AuditClientWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState) {
        case QAbstractSocket::UnconnectedState:
            ui ->textEditEtat->append("The socket is not connected.");
            break;
        case QAbstractSocket::HostLookupState:
            ui ->textEditEtat->append("The socket is performing a host name lookup.");
            break;
        case QAbstractSocket::ConnectingState:
            ui ->textEditEtat->append("The socket has started establishing a connection.");
            break;
        case QAbstractSocket::ConnectedState:
            ui ->textEditEtat->append("A connection is established.");
            break;
        case QAbstractSocket::BoundState:
            ui ->textEditEtat->append("The socket is bound to an address and port.");
            break;
        case QAbstractSocket::ClosingState:
            ui ->textEditEtat->append("The socket is about to close (data may still be waiting to be written).");
            break;
        case QAbstractSocket::ListeningState:
            ui ->textEditEtat->append("For internal use only.");
            break;
        }
}

void AuditClientWidget::onQTcpSocketAboutToClose()
{
    ui->textEditEtat->append("about to close");
}

void AuditClientWidget::onQTcpSocketBytesWritten(qint64 bytes)
{
    ui->textEditEtat->append(QString::number(bytes)+" bytes written on chanel");
}

void AuditClientWidget::onQTcpSocketChannelBytesWritten(int channel, qint64 bytes)
{
    ui->textEditEtat->append(QString::number(bytes)+" bytes written on chanel"+ QString::number(channel));
}

void AuditClientWidget::onQTcpSocketChannelReadyRead(int channel)
{
    ui->textEditEtat->append("ready read on chanel" +QString::number(channel));

}

void AuditClientWidget::onQTcpSocketReadChannelFinished()
{
    ui->textEditEtat->append("ready read finished");

}

void AuditClientWidget::onQTcpSocketDestroyed(QObject *obj)
{
    Q_UNUSED(obj);
    ui->textEditEtat->append("obj destroyed");
}

