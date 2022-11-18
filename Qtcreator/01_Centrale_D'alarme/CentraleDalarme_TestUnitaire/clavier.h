#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>
#include <QTimer>
#include "centraledalarme.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Clavier;
}
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    explicit Clavier(CentraleDalarme *_centrale, QWidget *parent = 0);
    ~Clavier();

private slots:
    void on_pushButtonMarche_clicked();
    void TraiterChiffre();
    void on_pushButtonArret_clicked();
    void onTimerLed_timeout();


private:
    Ui::Clavier *ui;
    CentraleDalarme *centrale;
    QTimer timerLed;
};

#endif // CLAVIER_H
