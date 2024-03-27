#ifndef window_h
#define window_h
#include <QtGui> // деректива предостваляющая доступ к классам и ф-ям длч раб. с граф интерф-м в QT
#include "area.h"
#include <QPushButton>
class Window : public QWidget // обьявление класса, наследуемого от класса QWidget
{
protected:
Area * area; // область отображения рисунка
QPushButton * btn;//указатель на обьект класса QPushButton
public:
Window();// конструктор класса Window
};
#endif//завершение условной компиляции для предотвращения многократного включения зоголовочного файла
