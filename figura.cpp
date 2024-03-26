#include <math.h>
#include "figura.h"

void Figura::move(float Alpha,QPainter *Painter)// поворот фигуры
{
    //вычисление новых координат, halflen определяет размер фигур
    dx=halflen*cos(Alpha);
    dy=halflen*sin(Alpha);
    draw(Painter);//метод который в дальнейшем переопределяется
}
void MyLine::draw(QPainter *Painter) //рисуем линию
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);//переопределяем draw и рисуем линию (x+dx,y+dy: начало линии, x-dx,y-dy: конец)
}
void MyRect::draw(QPainter *Painter)//рисуем квадрат
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
