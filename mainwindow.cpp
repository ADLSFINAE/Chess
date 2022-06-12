#include "mainwindow.h"
#include <QPainter>
#define SIZE_X 40
#define SIZE_Y 40

MainWidget::MainWidget(QWidget *parent)
    :QWidget(parent)
{

}

void MainWidget::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i+j)%2 == 0){
                painter.drawRect(i*SIZE_X, j*SIZE_Y, 40, 40);
                painter.fillRect(QRectF(i*SIZE_X, j*SIZE_Y, 40, 40), Qt::white);
            }
            else{
                painter.drawRect(i*SIZE_X, j*SIZE_Y, 40, 40);
                painter.fillRect(QRectF(i*SIZE_X, j*SIZE_Y, 40, 40), Qt::black);
            }
        }
    }
}


