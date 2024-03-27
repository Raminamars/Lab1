#ifndef win_h
#define win_h
#include <QtGui>
#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QTextCodec>
#include <QPushButton>
#include <QLabel>

class Counter:public QLineEdit
{
    Q_OBJECT //макрос для использования слотов и сигналов
public:
    Counter(const QString & contents, QWidget *parent=0):
        QLineEdit(contents,parent){}//конструктор
signals:
    void tick_signal(); //новый сигнал, каждый раз при изменении
public slots:
    // обьявляем слот
    void add_one() // функция с результатом
    {
        QString str=text();// записываем текст в текстовое поле
        int r=str.toInt();// переводим в int
        if (r!=0 && r%5 ==0) emit tick_signal(); //если значение кратно 5 вызвать tick_signal
        r++;
        str.setNum(r);
        setText(str); //устанавливаем новый текст в поле
    }
};
class Win: public QWidget
{
    Q_OBJECT
protected:
    QLabel *label1,*label2;
    Counter *edit1,*edit2;
    QPushButton *calcButton;
    QPushButton *exitButton;
public:
    Win(QWidget *parent = 0);// конструктор
};
#endif
