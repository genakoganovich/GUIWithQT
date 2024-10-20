#include <QtWidgets>

int main(int argc, char *argv[])
{
    // создание объекта-приложения
    QApplication app(argc,argv);


    // создание объекта управления окном
    // изменение заголовка окна
    QWidget win;
    win.setWindowTitle("Hello");


    // создание метки
    QLabel *helloLabel=new QLabel("Hello!",&win);

    // создание кнопки
    QPushButton *exitButton=new QPushButton("Close",&win);


    // создание менеджера компоновки для управления размещением метки и кнопки в окне win
    QHBoxLayout *layout = new QHBoxLayout(&win);


    layout->addWidget(helloLabel); // добавление метки к компоновщику
    layout->addWidget(exitButton); // добавление кнопки к компоновщику

    // связь сигнала нажатия кнопки с закрытием окна win
    QObject::connect(exitButton,SIGNAL(clicked(bool)), &win,SLOT(close()));

    // визуализация окна win
    win.show();

    // запуск цикла обработки сообщений приложения
    app.exec();
}
