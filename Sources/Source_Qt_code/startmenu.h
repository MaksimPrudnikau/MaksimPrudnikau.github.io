#ifndef STARTMENU_H
#define STARTMENU_H

#include <QDialog>
#include "mapnomenclature.h"
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

private:
    Ui::StartMenu *ui;
    mapnomenclature* mapnomenclature;
};

#endif // STARTMENU_H
