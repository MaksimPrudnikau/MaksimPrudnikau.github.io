#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Maps/Map.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    std::string AngleToString(Angle angle);

    void showMap(const WidgetMap& map);

signals:
    void BackToTheStartMenu();

private slots:
    void on_CalculateButton_clicked();

    void on_BackToStartMenu_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
