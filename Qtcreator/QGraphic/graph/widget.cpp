#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    scene = new QGraphicsScene();
    vue = new QGraphicsView(this);

    player = new QMediaPlayer();
    audiOutput = new QAudioOutput();

    player->setAudioOutput(audiOutput);
    //rectangle
    scene->setSceneRect(0,0,400,300);
    QGraphicsRectItem *rectangle = new QGraphicsRectItem(10,10,200,100);
    QColor bleu (0,0,255);
    QPen contour(bleu);

    QBrush interieur(bleu);
    rectangle->setBrush(interieur);
    rectangle->setPen(bleu);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);

    //triangle
    QPolygon tri;
    tri.setPoints(3,0,0,30,50,50,0);
    QGraphicsPolygonItem *triangle = new QGraphicsPolygonItem(tri);
    triangle->setRotation(100);
    //triangle->setScale(10);
    triangle->setPos(200,200);
    QPen contourTriangle(Qt::red);
    contourTriangle.setWidth(3);
    triangle->setPen(contourTriangle);
    triangle->setBrush(interieur);

    //cercle
    QGraphicsEllipseItem *cercle = new QGraphicsEllipseItem(45,125,50,50);
    QPen contourCercle(Qt::magenta);
    contourCercle.setWidth(3);
    cercle->setPen(contourCercle);
    cercle->setBrush(QBrush(Qt::green));

    //ellipse
    QGraphicsEllipseItem *ellipse = new QGraphicsEllipseItem(200,125,120,50);
    ellipse->setBrush(QBrush(Qt::red));
    ellipse->setPen(QPen(Qt::red));

    //rond pixmap
    cerclePixmap = new QGraphicsEllipseItem (250,25,30,30);
    QBrush fondpixmap;
    QPixmap monpixmap("/home/USERS/ELEVES/SNIR2021/tsoulaimana/Images/1670595959701.jpg");

    fondpixmap.setTexture(monpixmap);
    cerclePixmap->setBrush(fondpixmap);

    scene->addItem(cerclePixmap);
    scene->addItem(ellipse);
    scene->addItem(cercle);
    scene->addItem(triangle);
    scene->addItem(rectangle);
    vue->fitInView(scene->sceneRect());
    vue->setScene(scene);
    vue->show();

    setFocus();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
    case Qt::Key_Left:
        cerclePixmap->moveBy(-10,0);
        break;
    case Qt::Key_Right:
        cerclePixmap->moveBy(10,0);
        break;
    case Qt::Key_Up:
        cerclePixmap->moveBy(0,-10);
        break;
    case Qt::Key_Down:
        cerclePixmap->moveBy(0,10);
        break;
    }

    QList <QGraphicsItem*> itemsCollitions;
    itemsCollitions=cerclePixmap->collidingItems();
    if (itemsCollitions.count()>0)
    {
        on_pushButtonPlaySound_clicked();
        foreach(QGraphicsItem *item,itemsCollitions)
        {
            item->setVisible(false);
        }
    }
}


void Widget::on_pushButtonPlaySound_clicked()
{
    player->setSource(QUrl::fromLocalFile("/home/USERS/ELEVES/boing.mp3"));
    audiOutput->setVolume(50);
    player->play();
}
