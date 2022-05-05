#pragma once
#include "startmenu.h"
#include "ui_startmenu.h"

StartMenu::StartMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);

    mapnomenclature = new class mapnomenclature();
    connect(mapnomenclature, &mapnomenclature::BackToTheStartMenu, this, &StartMenu::show);

    mapBorders = new MapBorders();
    connect(mapBorders, &MapBorders::BackToTheStartMenu, this, &StartMenu::show);
}

StartMenu::~StartMenu()
{
    delete ui;
}

void StartMenu::on_MapNomenclature_clicked()
{
    mapnomenclature->show();
    this->close();
}

void StartMenu::on_MapBorders_clicked()
{
    mapBorders->show();
    this->close();
}

