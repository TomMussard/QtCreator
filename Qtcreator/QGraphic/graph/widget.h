#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QKeyEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButtonPlaySound_clicked();

private:
    Ui::Widget *ui;
    QGraphicsScene *scene;
    QGraphicsView *vue;
    QMediaPlayer *player;
    QAudioOutput *audiOutput;
    QGraphicsEllipseItem * cerclePixmap;

};
#endif // WIDGET_H
