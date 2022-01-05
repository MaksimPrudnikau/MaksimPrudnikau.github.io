#ifndef MAPBORDERS_H
#define MAPBORDERS_H

#include <QDialog>
#include "Maps/Map.h"
#include "mainwindow.h"
namespace Ui {
class MapBorders;
}

class MapBorders : public QDialog
{
    Q_OBJECT

public:
    explicit MapBorders(QWidget *parent = nullptr);
    ~MapBorders();

protected:
    std::string AngleToString(Angle angle);
    void showMap(const WidgetMap& map);

signals:
    void BackToTheStartMenu();

private slots:
    void on_BackToStartMenu_clicked();

    void on_CalculateButton_clicked();

private:
    Ui::MapBorders *ui;
};

#endif // MAPBORDERS_H
