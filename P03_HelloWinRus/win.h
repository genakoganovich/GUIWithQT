#ifndef WIN_H
#define WIN_H

#include <QtGui>
#include <QWidget>
#include <QTextCodec>
#include <QLabel>
#include <QPushButton>

class Win:public QWidget
{
private:
    QTextCodec *codec; // перекодировщик
    QLabel *helloLabel;
    QPushButton *exitButton;
public:
    Win(QWidget *parent = 0);
};
#endif // WIN_H
