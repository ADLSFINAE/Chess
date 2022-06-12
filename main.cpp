#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;

    QGraphicsScene* scene = new QGraphicsScene(QRectF(0, 0, 640, 640));
    scene->addWidget(&w);

    QGraphicsPixmapItem* pBlackKing = scene->addPixmap(QPixmap(":/blackKing.png")
                                                        .scaled(40,40,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    pBlackKing->setPos(120, 0);
    pBlackKing->setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsView* view = new QGraphicsView(scene);
    view->show();
    scene->addRect(scene->sceneRect());
    return a.exec();
}






