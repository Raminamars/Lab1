#include "window.h"
Window::Window() //определение конструктора класса window
{
    this->setWindowTitle("Обработка событий");//установка заголовка окна на "Обработка событий"
    area = new Area( this ); //создание обьекта area
    btn = new QPushButton("Завершить",this );//создание кнопки с надписью
    QVBoxLayout *layout = new QVBoxLayout(this);//создание вертикального макета для управления размещ. видж-в
    layout->addWidget(area);//добавление обьекта area в макет layout
    layout->addWidget(btn);//добавление обьекта btn в макет layout
    connect(btn, &QPushButton::clicked,this,&QWidget::close);//установка соединения между сигналом cliced кнопки
    // кнопки btn и слотом close()
};
