#include <QApplication>// доступ к классу QApplication для управления прилодением QT

#include "window.h"
int main(int argc, char *argv[])// определение ф-ии main arg - колво аргументов командной строки, *arg - указ. на массив арг
{
    QApplication appl(argc, argv); //создание обьекта приложения QApplication с передачей параметров
    Window win; // создание обьекта класса window
    win.show(); //отображение окна, связанного с обьектом win
    return appl.exec(); //запуск основного цикла обработки событий приложения
}
