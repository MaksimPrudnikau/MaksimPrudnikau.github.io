/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *MapNomenclature;
    QPushButton *MapBorders;

    void setupUi(QDialog *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName(QString::fromUtf8("StartMenu"));
        StartMenu->resize(400, 300);
        label = new QLabel(StartMenu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 191, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Sylfaen"));
        font.setPointSize(22);
        label->setFont(font);
        widget = new QWidget(StartMenu);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 130, 281, 67));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MapNomenclature = new QPushButton(widget);
        MapNomenclature->setObjectName(QString::fromUtf8("MapNomenclature"));

        verticalLayout->addWidget(MapNomenclature);

        MapBorders = new QPushButton(widget);
        MapBorders->setObjectName(QString::fromUtf8("MapBorders"));

        verticalLayout->addWidget(MapBorders);


        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QDialog *StartMenu)
    {
        StartMenu->setWindowTitle(QCoreApplication::translate("StartMenu", "GeoMaks", nullptr));
        label->setText(QCoreApplication::translate("StartMenu", "GeoMaks", nullptr));
        MapNomenclature->setText(QCoreApplication::translate("StartMenu", "\320\237\320\276\320\270\321\201\320\272 \320\275\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\321\213 \320\277\320\276 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260\320\274", nullptr));
        MapBorders->setText(QCoreApplication::translate("StartMenu", "\320\237\320\276\320\270\321\201\320\272 \320\263\321\200\320\260\320\275\320\270\321\206 \321\200\320\260\320\274\320\272\320\270 \320\277\320\276 \320\275\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
