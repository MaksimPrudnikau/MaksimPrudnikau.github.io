#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QDialog>

namespace Ui {
class StartWindow;
}

class StartMenu : public QDialog
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private:
    Ui::StartWindow *ui;
};

#endif // STARTWINDOW_H
