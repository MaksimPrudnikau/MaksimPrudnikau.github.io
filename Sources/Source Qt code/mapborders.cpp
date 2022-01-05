#include "mapborders.h"
#include "ui_mapborders.h"

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

