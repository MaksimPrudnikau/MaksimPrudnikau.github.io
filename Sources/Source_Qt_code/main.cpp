#include "mainwindow.h"
#include "startmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartMenu menu;
    menu.show();
    return a.exec();
}
