#include <QApplication>
#include <form.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Form *form = new Form();
    form->show();
    return app.exec();
}
