#include <win.h>
#include <QHBoxLayout>


Win::Win(QWidget *parent):QWidget(parent)// реализуем конструктор
{
this->setWindowTitle("Счетчик"); //название у окна
label1 = new QLabel("Cчет по 1",this);// надпись в куче (и указываю им родителя для контролирования времени жизни окна)
label2 = new QLabel("Cчет по 5",this);
edit1 = new Counter("0",this);
edit2 = new Counter("0",this);
calcButton=new QPushButton("+1",this);
exitButton=new QPushButton("Выход",this);

//содаем блоки(коробки) для отрисовки
QHBoxLayout *layout1 = new QHBoxLayout();
layout1->addWidget(label1);
layout1->addWidget(label2);
QHBoxLayout *layout2 = new QHBoxLayout();
layout2->addWidget(edit1);
layout2->addWidget(edit2);
QHBoxLayout *layout3 = new QHBoxLayout();
layout3->addWidget(calcButton);
layout3->addWidget(exitButton);
QVBoxLayout *layout4 = new QVBoxLayout(this);
layout4->addLayout(layout1);
layout4->addLayout(layout2);
layout4->addLayout(layout3);

// связь сигнала нажатия кнопки и слота закрытия окна
connect(calcButton,&QPushButton::clicked, edit1,&Counter::add_one);
connect(edit1,&Counter::tick_signal,edit2,&Counter::add_one);
connect(exitButton,&QPushButton::clicked,this,Win::close);
}
//connect(объект у которого сигнал, функция к которая присоединяется,
  // объект у которого слот, функция к которому присоединяем);
//connect(fileExplorerWindow, &FileExplorerWindow::dataChangeSignal,
      //  chartWindow, &ChartWindow::switchData);
