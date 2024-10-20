#include "win.h"
#include <QHBoxLayout>

Win::Win(QWidget *parent):QWidget(parent)
{
    codec = QTextCodec::codecForName("UTF-8");
    setWindowTitle(codec->toUnicode("Приветствие"));
    helloLabel = new QLabel(codec->toUnicode("Привет!"), this);
    exitButton = new QPushButton(codec->toUnicode("Выход"), this);
    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(helloLabel);
    layout->addWidget(exitButton);
    connect(exitButton, SIGNAL(clicked(bool)), this, SLOT(close()));
}
