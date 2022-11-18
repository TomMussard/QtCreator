#ifndef WIDGET_H
#define WIDGET_H

#include <QTcpSocket>
#include <QDebug>
#include <ui_widget.h>

QT_BEGIN_NAMESPACE
namespace Ui { class widget; }
QT_END_NAMESPACE

class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = nullptr);
    ~widget();

private slots:

    void on_pushButton_connection_clicked();

    void on_pushButton_envoyer_clicked();

    void onQTcpSocketConnected();

    void onQTcpSocketDisconnected();

    void onQTcpSocketReadyRead();

    void onQTcpSocketStateChanged(QAbstractSocket::SocketState socketState);

    void onQTcpSocketErrorOccured(QAbstractSocket::SocketError socketError);

    private:

    Ui::widget *ui;
    QTcpSocket sockVersServeur;

};
#endif // WIDGET_H
