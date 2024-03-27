#include <QApplication>
#include <win.h>

int main(int argc, char *argv[]) //определение ф-ии main
{
    QApplication app(argc, argv); // создание обьекта
    Win win(0); //обьект окна, класса win без родителя
    win.show(); //показываем окно на экране
    return app.exec();
}
