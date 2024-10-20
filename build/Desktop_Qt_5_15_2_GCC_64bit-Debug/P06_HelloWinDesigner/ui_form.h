/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_win
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *button;

    void setupUi(QWidget *win)
    {
        if (win->objectName().isEmpty())
            win->setObjectName(QString::fromUtf8("win"));
        win->resize(340, 149);
        horizontalLayout = new QHBoxLayout(win);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(win);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        button = new QPushButton(win);
        button->setObjectName(QString::fromUtf8("button"));

        verticalLayout->addWidget(button);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(win);
        QObject::connect(button, SIGNAL(clicked()), win, SLOT(close()));

        QMetaObject::connectSlotsByName(win);
    } // setupUi

    void retranslateUi(QWidget *win)
    {
        win->setWindowTitle(QCoreApplication::translate("win", "Form", nullptr));
        label->setText(QCoreApplication::translate("win", "Hello!", nullptr));
        button->setText(QCoreApplication::translate("win", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class win: public Ui_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
