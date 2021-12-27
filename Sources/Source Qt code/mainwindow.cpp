#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sstream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CalculateButton_clicked()
{
    unsigned short
            lat_deg = ui->Lat_deg->value(),
            lat_min = ui->Lat_min->value();
    unsigned short
            long_deg = ui->Long_deg->value(),
            long_min = ui->Long_min->value();
    double
            lat_sec = ui->Lat_sec->value(),
            long_sec = ui->Long_sec->value();

    Point base =
    {
        {lat_deg, lat_min, lat_sec},
        {long_deg, long_min, long_sec}
    };

    auto scale = Scales(ui->ScalesBox->currentIndex());

    showMap(WidgetMap::GetNomenclature(base, scale), scale);
}

std::string MainWindow::AngleToString(Angle angle)
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

void MainWindow::showMap(const WidgetMap& map, const Scales& scale)
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
