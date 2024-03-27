#ifndef area_h //директива
#define area_h //директива
#include "figura.h"
class Area : public QWidget // поверхность
{
    int myTimer; // идентификатор таймера
    float alpha; // угол поворота
public:
    Area(QWidget *parent = 0); //конструктор
    ~Area();//диструктор
    //фигуры
    MyLine *myline;
    MyRect *myrect;
protected:
    //обработчики событий
    //переопределеннфе ф-ии из QWidget
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};
#endif // area_h
