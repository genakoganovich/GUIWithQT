#ifndef window_h
#define window_h

#include "area.h"
#include <QtGui>
#include <QPushButton>

class Window : public QWidget {
protected:
    QTextCodec *codec;
    Area *area; // область отображения рисунка
    QPushButton *btn;

public:
    Window();
};
#endif
