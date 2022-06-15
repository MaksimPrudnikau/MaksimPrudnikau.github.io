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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QWidget *gridLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *MapNomenclature;
    QSpacerItem *verticalSpacer_4;
    QPushButton *MapBorders;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName(QString::fromUtf8("StartMenu"));
        StartMenu->resize(400, 300);
        gridLayoutWidget = new QWidget(StartMenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 60, 283, 168));
        verticalLayout_4 = new QVBoxLayout(gridLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);

        verticalLayout_4->addWidget(label);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        MapNomenclature = new QPushButton(gridLayoutWidget);
        MapNomenclature->setObjectName(QString::fromUtf8("MapNomenclature"));
        QFont font1;
        font1.setPointSize(8);
        MapNomenclature->setFont(font1);

        verticalLayout->addWidget(MapNomenclature);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        MapBorders = new QPushButton(gridLayoutWidget);
        MapBorders->setObjectName(QString::fromUtf8("MapBorders"));
        MapBorders->setFont(font1);

        verticalLayout->addWidget(MapBorders);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_4->addLayout(verticalLayout);


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
