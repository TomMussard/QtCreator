#ifndef AUDITCLIENTWIDGET_H
#define AUDITCLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QDebug>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class AuditClientWidget; }
QT_END_NAMESPACE

class AuditClientWidget : public QWidget
{
    Q_OBJECT

public:
    AuditClientWidget(QWidget *parent = nullptr);
    ~AuditClientWidget();

private slots:
    void on_pushButtonConnexion_clicked();
    void on_pushButtonOrdinateur_clicked();
    void on_pushButtonUtilisateur_clicked();
    void on_pushButtonArchitecture_clicked();
    void on_pushButtonOs_clicked();

    void onQTcpSocketConnecetd();
    void onQTcpSocketDisconnecetd();
    void onQTcpSocketReadyRead();
    void onQTcpSocketErrorOccured(QAbstractSocket::SocketError socketError);
    void onQTcpSocketHostFound();
    void onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState);
    void onQTcpSocketAboutToClose();
    void onQTcpSocketBytesWritten(qint64 bytes);
    void onQTcpSocketChannelBytesWritten(int channel, qint64 bytes);
    void onQTcpSocketChannelReadyRead(int channel);
    void onQTcpSocketReadChannelFinished();
    void onQTcpSocketDestroyed(QObject *obj);


private:
    Ui::AuditClientWidget *ui;
    QTcpSocket *socketDeDialogueAvecServeur;
    QString typeDeDemande;
};
#endif // AUDITCLIENTWIDGET_H
