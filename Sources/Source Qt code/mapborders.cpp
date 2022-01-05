#include "mapborders.h"
#include "ui_mapborders.h"
#include <sstream>
MapBorders::MapBorders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MapBorders)
{
    ui->setupUi(this);
}

MapBorders::~MapBorders()
{
    delete ui;
}

void MapBorders::on_BackToStartMenu_clicked()
{
    this->close();
    emit BackToTheStartMenu();
}


void MapBorders::on_CalculateButton_clicked()
{
    auto scale = Scales(ui->ScalesBox->currentIndex());
    auto map = WidgetMap::GetBorders(ui->nomenclature->text().toStdString(), scale);
    showMap(map);
}

std::string MapBorders::AngleToString(Angle angle)
{
    const std::string degreeSign = "\u00B0";
    const std::string minuteSign = "'";
    const std::string secondSign = "\"";
    std::stringstream out;
    out.precision(4);
    out << angle.degrees << degreeSign << angle.minutes << minuteSign << angle.seconds << secondSign;
    return out.str();
            //std::to_string(angle.degrees) + degreeSign
            //+ std::to_string(angle.minutes) + minuteSign
            //+ std::to_string(angle.seconds).substr + secondSign;
}

void MapBorders::showMap(const WidgetMap& map)
{
    std::string leftUpLat = AngleToString(map.borders.leftUp.Latitude);
    std::string leftUpLong = AngleToString(map.borders.leftUp.Longitude);

    std::string leftDownLat = AngleToString(map.borders.leftDown.Latitude);
    std::string leftDownLong = AngleToString(map.borders.leftDown.Longitude);

    std::string rightUpLat = AngleToString(map.borders.rightUp.Latitude);
    std::string rightUpLong = AngleToString(map.borders.rightUp.Longitude);

    std::string rightDownLat = AngleToString(map.borders.rightDown.Latitude);
    std::string rightDownLong = AngleToString(map.borders.rightDown.Longitude);

    ui->leftUpLat->setText(QString::fromStdString(leftUpLat));
    ui->leftUpLong->setText(QString::fromStdString(leftUpLong));

    ui->leftDownLat->setText(QString::fromStdString(leftDownLat));
    ui->leftDownLong->setText(QString::fromStdString(leftDownLong));

    ui->rightUpLat->setText(QString::fromStdString(rightUpLat));
    ui->rightUpLong->setText(QString::fromStdString(rightUpLong));

    ui->rightDownLat->setText(QString::fromStdString(rightDownLat));
    ui->rightDownLong->setText(QString::fromStdString(rightDownLong));

    ui->answer->setText(QString::fromStdString(map.Name));
}
