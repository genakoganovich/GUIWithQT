#include <QApplication>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Main Window");
    window.setObjectName("window");

    QLineEdit *edit1 = new QLineEdit("Edit1", &window);
    QLineEdit *edit2 = new QLineEdit("Edit2", &window);

    QHBoxLayout *layout = new QHBoxLayout; // выравнивание по горизонтали

    layout->setContentsMargins(5, 5, 5, 5); // внешние поля окна
    layout->setSpacing(5); // просвет между виджетами
    window.setLayout(layout); // связывание layout с виджетом окна задание порядка следования элементов

    layout->addWidget(edit1);
    layout->addWidget(edit2);

    window.show();
    return app.exec();
}
