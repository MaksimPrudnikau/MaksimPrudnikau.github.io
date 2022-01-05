#ifndef MAPBORDERS_H
#define MAPBORDERS_H

#include <QDialog>

namespace Ui {
class MapBorders;
}

class MapBorders : public QDialog
{
    Q_OBJECT

public:
    explicit MapBorders(QWidget *parent = nullptr);
    ~MapBorders();

signals:
    void BackToTheStartMenu();

private slots:
    void on_BackToStartMenu_clicked();

private:
    Ui::MapBorders *ui;
};

#endif // MAPBORDERS_H
