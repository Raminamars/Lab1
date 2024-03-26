#ifndef figura_h //директива для условной компиляции (для проверки определен ли макрос или символ)
#define figura_h //директива
#include <QtGui>
#include <QtWidgets>//файл,пред-й доступ к классам и фун-ям для работы с граф-м интерф в QT

class Figura //базовый абстрактный класс фигуры
{
protected:
    int x,y,halflen,dx,dy;//r убрала она вроде бы ни на что не влияет
    //член данные x,y - центр. halflen- размер фигуры. dx,dy-поварот
    virtual void draw(QPainter *Painter)=0; //виртуальная функция draw
public:
    Figura(int X,int Y,int Halflen)://конструктор
        x(X),y(Y),halflen(Halflen){}
    void move(float Alpha,QPainter *Painter); //поворот фигуры
};
class MyLine:public Figura // линия
{
protected:
    void draw(QPainter *Painter); //переопределение
public:
    MyLine(int x,int y,int halflen):Figura(x,y,halflen){} //конструктор
};
class MyRect:public Figura //квадрат
{
protected:
    void draw(QPainter *Painter); //переопределение
public:
    MyRect(int x,int y,int halflen):Figura(x,y,halflen){} //конструктор
};
#endif//директива (конец блока условной компиляции)
