#include "dabclientwidget.h"
#include "ui_dabclientwidget.h"

DabClientWidget::DabClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DabClientWidget)
{

    ui->setupUi(this);
    ui->groupBoxOP->setDisabled(true);
    connect(&socketClientBanque,&QTcpSocket::connected,this,&DabClientWidget::onQTcpSocketConnecetd);
    connect(&socketClientBanque,&QTcpSocket::disconnected,this,&DabClientWidget::onQTcpSocketDisconnecetd);
    connect(&socketClientBanque,&QTcpSocket::readyRead,this,&DabClientWidget::onQTcpSocketReadyRead);
    connect(&socketClientBanque,&QTcpSocket::errorOccurred,this,&DabClientWidget::onQTcpSocketErrorOccured);
    connect(&socketClientBanque,&QTcpSocket::stateChanged,this,&DabClientWidget::onQTcpSocketStateChanged);
    connect(&socketClientBanque,&QTcpSocket::readyRead,this,&DabClientWidget::onQTcpSocketReadyRead);
    connect(&socketClientBanque,&QTcpSocket::aboutToClose,this,&DabClientWidget::onQTcpSocketAboutToClose);
    connect(&socketClientBanque,&QTcpSocket::bytesWritten,this,&DabClientWidget::onQTcpSocketBytesWritten);
    connect(&socketClientBanque,&QTcpSocket::channelBytesWritten,this,&DabClientWidget::onQTcpSocketChannelBytesWritten);
    connect(&socketClientBanque,&QTcpSocket::channelReadyRead,this,&DabClientWidget::onQTcpSocketReadChannelFinished);
    connect(&socketClientBanque,&QTcpSocket::readChannelFinished,this,&DabClientWidget::onQTcpSocketReadChannelFinished);
    connect(&socketClientBanque,&QTcpSocket::destroyed,this,&DabClientWidget::onQTcpSocketDestroyed);
}

DabClientWidget::~DabClientWidget()
{
    delete ui;
}


void DabClientWidget::on_pushButton_connexion_clicked()
{
    if(ui->pushButton_connexion->text()=="Connexion"){
          socketClientBanque.connectToHost(ui->lineEdit_adresse->text(),ui->lineEdit_port->text().toInt());
      }else{
          socketClientBanque.disconnectFromHost();
      }
}

void DabClientWidget::on_pushButton_quitter_clicked()
{
    close();

}

void DabClientWidget::onQTcpSocketConnecetd()
{
       ui->textEdit_etat->append("Connected");
       ui->pushButton_connexion->setText("Disconnected");
       ui->groupBoxOP->setEnabled(true);
       ui->radioButton_Solde->setChecked(true);


       ui->lineEdit_port->setEnabled(false);
       ui->lineEdit_adresse->setEnabled(false);

}

void DabClientWidget::onQTcpSocketDisconnecetd()
{
    ui->pushButton_connexion->setText("Connected");
    ui->textEdit_etat->append("Disconnected");
    ui->lineEdit_port->setEnabled(true);
    ui->lineEdit_adresse->setEnabled(true);
    ui->lineEdit_message->setText("");


    ui->groupBoxOP->setEnabled(false);
}

void DabClientWidget::onQTcpSocketReadyRead()
{
    quint16 taille = 0;
    QString message;
        if(socketClientBanque.bytesAvailable() >= static_cast<qint64>(sizeof(taille)))
        {
            // association de la socket au flux d'entrée
            QDataStream entree(&socketClientBanque);
            // extraction de la taille de ce que l'on doit recevoir
            entree >> taille;
            // si le nombre d'octets reçu est au moins égal a celui de ce que l'on doit
            // recevoir
            if (socketClientBanque.bytesAvailable() >= static_cast<qint64>(taille))
            {
                entree >> message;
                ui->lineEdit_message->setText(message);
            }
        }
}

void DabClientWidget::onQTcpSocketErrorOccured(QAbstractSocket::SocketError socketError)
{
    Q_UNUSED(socketError); // le paramètre n'est pas utilisé dans cette méthode
        ui->textEdit_etat->append(socketClientBanque.errorString());
}

void DabClientWidget::onQTcpSocketHostFound()
{
    ui->textEdit_etat->append("host found");
}

void DabClientWidget::onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState)
{
    switch (socketState) {
        case QAbstractSocket::UnconnectedState:
            ui ->textEdit_etat->append("The socket is not connected.");
            break;
        case QAbstractSocket::HostLookupState:
            ui ->textEdit_etat->append("The socket is performing a host name lookup.");
            break;
        case QAbstractSocket::ConnectingState:
            ui ->textEdit_etat->append("The socket has started establishing a connection.");
            break;
        case QAbstractSocket::ConnectedState:
            ui ->textEdit_etat->append("A connection is established.");
            break;
        case QAbstractSocket::BoundState:
            ui ->textEdit_etat->append("The socket is bound to an address and port.");
            break;
        case QAbstractSocket::ClosingState:
            ui ->textEdit_etat->append("The socket is about to close (data may still be waiting to be written).");
            break;
        case QAbstractSocket::ListeningState:
            ui ->textEdit_etat->append("For internal use only.");
            break;
        }
}

void DabClientWidget::onQTcpSocketAboutToClose()
{
    ui->textEdit_etat->append("about to close");
}

void DabClientWidget::onQTcpSocketBytesWritten(qint64 bytes)
{
     ui->textEdit_etat->append(QString::number(bytes)+" bytes written on chanel");
}

void DabClientWidget::onQTcpSocketChannelBytesWritten(int channel, qint64 bytes)
{
    ui->textEdit_etat->append(QString::number(bytes)+" bytes written on chanel"+ QString::number(channel));
}

void DabClientWidget::onQTcpSocketChannelReadyRead(int channel)
{
    ui->textEdit_etat->append("ready read on chanel" +QString::number(channel));
}

void DabClientWidget::onQTcpSocketReadChannelFinished()
{
    ui->textEdit_etat->append("Read channel finished");

}

void DabClientWidget::onQTcpSocketDestroyed(QObject *obj)
{
    Q_UNUSED(obj);
        ui->textEdit_etat->append("obj destroyed");
}

void DabClientWidget::on_pushButton_NumeroCompte_clicked()
{
    quint16 taille = 0;
    QChar commande = 'N';
    // Un entier de type int
    int numCompte = ui->lineEdit_numerocompte->text().toInt();
    QBuffer tampon;
    if(tampon.open(QIODevice::WriteOnly))
    {
    QDataStream sortie(&tampon);
    sortie << taille << commande << numCompte;
    taille = tampon.size() - sizeof(taille);
    tampon.seek(0);
    sortie << taille;
    socketClientBanque.write(tampon.buffer());
    }
}


void DabClientWidget::on_pushButton_Envoi_clicked()
{
    quint16 taille = 0;
    if(ui->radioButton_Retrait->isChecked() == true){
        QChar commande = 'R';
        float numCompte = ui->lineEdit_montant->text().toFloat();
        QBuffer tampon;
        if(tampon.open(QIODevice::WriteOnly))
        {
            QDataStream sortie(&tampon);
            sortie << taille << commande << numCompte ;
            taille = tampon.size() - sizeof(taille);
            tampon.seek(0);
            sortie << taille;
            socketClientBanque.write(tampon.buffer());
        }

    }

    if(ui->radioButton_Depot->isChecked() == true){
        QChar commande = 'D';
        float numCompte = ui->lineEdit_montant->text().toFloat();
        QBuffer tampon;
        if(tampon.open(QIODevice::WriteOnly))
        {
            QDataStream sortie(&tampon);
            sortie << taille << commande << numCompte ;
            taille = tampon.size() - sizeof(taille);
            tampon.seek(0);
            sortie << taille;
            socketClientBanque.write(tampon.buffer());
        }
    }

        if(ui->radioButton_Solde->isChecked() == true){
            QChar commande = 'S';
            QBuffer tampom;
            if(tampom.open(QIODevice::WriteOnly))
            {
                QDataStream sortie(&tampom);
                sortie << taille << commande;
                taille = tampom.size() - sizeof(taille);
                tampom.seek(0);
                sortie << taille;
                socketClientBanque.write(tampom.buffer());
            }
}
}

