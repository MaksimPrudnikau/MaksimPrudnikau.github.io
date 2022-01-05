#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "mainwindow.h"
#include "mapborders.h"
namespace Ui {
class StartMenu;
}

class StartMenu : public QDialog
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private slots:
    void on_MapNomenclature_clicked();

    void on_MapBorders_clicked();

private:
    Ui::StartMenu *ui;
    MainWindow* mainWindow;
    MapBorders* mapBorders;
};

#endif // STARTMENU_H
