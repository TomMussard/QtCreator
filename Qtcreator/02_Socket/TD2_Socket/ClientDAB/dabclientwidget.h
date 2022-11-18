#ifndef DABCLIENTWIDGET_H
#define DABCLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QDebug>
#include <QBuffer>

QT_BEGIN_NAMESPACE
namespace Ui { class DabClientWidget; }
QT_END_NAMESPACE

class DabClientWidget : public QWidget
{
    Q_OBJECT

public:
    DabClientWidget(QWidget *parent = nullptr);
    ~DabClientWidget();

private slots:


    void on_pushButton_connexion_clicked();
    void on_pushButton_quitter_clicked();


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
    void onQTcpSocketDestroyed(QObject *obj = nullptr);


    void on_pushButton_NumeroCompte_clicked();
    void on_pushButton_Envoi_clicked();

private:
    Ui::DabClientWidget *ui;
    QTcpSocket socketClientBanque;
};
#endif // DABCLIENTWIDGET_H
