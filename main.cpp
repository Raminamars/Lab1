#include <QApplication>// доступ к классу QApplication для управления прилодением QT

#include "window.h"
int main(int argc, char *argv[])// arg - колво аргументов командной строки, *arg - указ. на массив арг
{
    QApplication appl(argc, argv);
    Window win;
    win.show();
    return appl.exec(); //запуск основного цикла обработки событий приложения
}
