#include "win.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//создание обьекта приложения QT
    Win win(0);//создаем окно приложения
    win.show();//отображение окна на экране
    return a.exec();//приложение ожидает закрытия
}
