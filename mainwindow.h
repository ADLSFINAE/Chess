#pragma once
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsEllipseItem>
#include <QTimer>

class MainWidget : public QWidget{
public:
    MainWidget(QWidget* parent = 0);
    void paintEvent(QPaintEvent*);

private:
    QGraphicsScene* scene;
    QGraphicsView* view;
    QPainter painter;
};
