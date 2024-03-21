#ifndef window_h
#define window_h
#include <QtGui>
#include "area.h"
#include <QPushButton>
class Window : public QWidget
{
protected:
QTextCodec *codec;
Area * area; // область отображения рисунка
QPushButton * btn;
public:
Window();
};
#endif
