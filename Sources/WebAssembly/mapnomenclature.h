#ifndef MAPNOMENCLATURE_H
#define MAPNOMENCLATURE_H

#include <QDialog>
#include "Maps/Map.h"
namespace Ui {
class mapnomenclature;
}

class mapnomenclature : public QDialog
{
    Q_OBJECT

public:
    explicit mapnomenclature(QWidget *parent = nullptr);
    ~mapnomenclature();

    std::string AngleToString(Angle angle);

    void showMap(const WidgetMap& map);

signals:
    void BackToTheStartMenu();

private slots:
    void on_CalculateButton_clicked();

    void on_BackToStartMenu_clicked();

private:
    Ui::mapnomenclature *ui;
};

#endif // MAPNOMENCLATURE_H
