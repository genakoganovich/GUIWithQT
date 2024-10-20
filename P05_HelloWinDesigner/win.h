#ifndef WIN_H
#define WIN_H

#include <QWidget>
#include "ui_form.h"

class Win: public QWidget, public Ui::win
{
    Q_OBJECT
public:
    Win(QWidget *parent = 0);
};
#endif // WIN_H
