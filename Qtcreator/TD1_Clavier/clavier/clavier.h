#ifndef CLAVIER_H
#define CLAVIER_H

#include <QWidget>
#include <QTimer>
#include <detecteur.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Clavier; }
QT_END_NAMESPACE

class Clavier : public QWidget
{
    Q_OBJECT

public:
    Clavier(QWidget *parent = nullptr);
    ~Clavier();

private slots:
    void on_pushButton_7_clicked();
    void TraiterChiffre();
    void onTimerLed_timeout();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Clavier *ui;
    QTimer timerLed;
};
#endif // CLAVIER_H
