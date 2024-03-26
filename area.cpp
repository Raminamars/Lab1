#include "area.h"
Area::Area(QWidget *parent):QWidget(parent) //конструктор с конструктором предка с параемнтром parent
{
    setFixedSize(QSize(300,200));// размер поверхности
    myline=new MyLine(80,100,50);// 80,100,- центр 50 - размер нового обьекта
    myrect=new MyRect(220,100,50);//создается новый обьект MyRect
    alpha=0;
}
void Area::showEvent(QShowEvent *)//переопр-я функция вызываемая после обработок виджетами
{
    myTimer=startTimer(50); // создать таймер и сохранить его id в myTimer 50 м.с.
}
void Area::paintEvent(QPaintEvent *)// событие обновления холста
{
    QPainter painter(this); //создание пера
    painter.setPen(Qt::red); //установка цвета пера
    myline->move(alpha,&painter); //отрисовка фигуры с наклоном
    myrect->move(alpha*(-0.5),&painter); //отрисовка фигуры с наклоном, но медленнее чем линии
}
void Area::timerEvent(QTimerEvent *event) //вызывается когда тикает таймер
{
    if (event->timerId() == myTimer) // если наш таймер
    {
        alpha=alpha+0.2; //то поворот фигурки
        update(); // метод обновить внешний вид унаследовванный от Qwidget
    }
    else
        QWidget::timerEvent(event); // иначе передать для стандартной обработки
}
void Area::hideEvent(QHideEvent *) // скрываем окно
{
    killTimer(myTimer); // уничтожаем таймер
}
Area::~Area() //диструктор для указателей на классы унаследованные от figur, не имеющ родителя
{
    //очищаем память по указателю
    delete myline;
    delete myrect;
}
