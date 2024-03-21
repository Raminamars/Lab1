#include "window.h"
Window::Window()
{
this->setWindowTitle("Обработка событий");//подправлено
area = new Area( this );
btn = new QPushButton("Завершить",this );//подправлено
QVBoxLayout *layout = new QVBoxLayout(this);
layout->addWidget(area);
layout->addWidget(btn);
connect(btn, &QPushButton::clicked,this,&QWidget::close);//подправленно
};
