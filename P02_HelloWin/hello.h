#ifndef HELLO_H
#define HELLO_H

#include <QtGui>
#include <QWidget>
#include <QLabel>
#include <QPushButton>


class Win: public QWidget
{
    QLabel *helloLabel;
    QPushButton *exitButton;
public:
    Win(QWidget *parent = 0);
};
#endif // HELLO_H
