#ifndef AUDITSERVEURMULTIWIDGET_H
#define AUDITSERVEURMULTIWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QProcess>
#include <QtNetwork>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class AuditServeurMultiWidget; }
QT_END_NAMESPACE

class AuditServeurMultiWidget : public QWidget
{
    Q_OBJECT

public:
    AuditServeurMultiWidget(QWidget *parent = nullptr);
    ~AuditServeurMultiWidget();

private slots:

    void on_pushButton_lancement_clicked();

    //slot gestion serveur
     void onQTcpServeracceptError(QAbstractSocket::SocketError socketError);
     void onQTcpServernewConnection();

     //slot gestion communication client
     void onQTcpSocketConnected();
     void onQTcpSocketDisconnected();
     void onQTcpSocketreadyRead();
     void onQTcpSocketErrorOccurred(QAbstractSocket::SocketError socketError);
     void onQTcpSockethostFound();
      void onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState);
      void onQTcpSocketAboutToClose();
      void onQTcpSocketbytesWritten(qint64 bytes);

      void onQProcess_readyReadStandardOutput();

private:

    Ui::AuditServeurMultiWidget *ui;
    QTcpServer *socketEcouteServeur;
    QList<QProcess *> listeProcess;
    QList<QTcpSocket *> listeSocketDialogueClient;
    QTcpSocket * socketDialogueClient;
};
#endif // AUDITSERVEURMULTIWIDGET_H
