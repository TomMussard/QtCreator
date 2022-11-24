#ifndef AUDITSERVEURMONOWIDGET_H
#define AUDITSERVEURMONOWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QProcess>
#include <QtNetwork>

QT_BEGIN_NAMESPACE
namespace Ui { class AuditServeurMonoWidget; }
QT_END_NAMESPACE

class AuditServeurMonoWidget : public QWidget
{
    Q_OBJECT

public:
    AuditServeurMonoWidget(QWidget *parent = nullptr);
    ~AuditServeurMonoWidget();

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
      void on_pushButton_Quitter_clicked();

private:
    Ui::AuditServeurMonoWidget *ui;
    QTcpServer * sockEcouteServeur;
    QProcess * process;
    QTcpSocket * socketDialogueClient;
};
#endif // AUDITSERVEURMONOWIDGET_H
