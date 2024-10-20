#include <QApplication>
#include "win.h"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Win * win= new Win();
    win->show();
    return app.exec(); // запуск цикла обработки сообщений
}
