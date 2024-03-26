#ifndef window_h
#define window_h
#include <QtGui> // деректива предостваляющая доступ к классам и ф-ям длч раб. с граф интерф-м в QT
#include "area.h"
#include <QPushButton>
class Window : public QWidget // обьявление класса, наследуемого от класса QWidget
{
protected:
QTextCodec *codec; // указатель на codec
Area * area; // область отображения рисунка
QPushButton * btn;
public:
Window();// конструктор класса Win
};
#endif
