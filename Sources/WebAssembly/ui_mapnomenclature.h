/********************************************************************************
** Form generated from reading UI file 'mapnomenclature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPNOMENCLATURE_H
#define UI_MAPNOMENCLATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mapnomenclature
{
public:
    QLabel *rightDownLat;
    QLabel *leftUpLong;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *CalculateButton;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *Lat_deg;
    QSpinBox *Lat_min;
    QDoubleSpinBox *Lat_sec;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *Long_deg;
    QSpinBox *Long_min;
    QDoubleSpinBox *Long_sec;
    QComboBox *ScalesBox;
    QLabel *leftDownLat;
    QLabel *rightUpLong;
    QFrame *downBorder;
    QFrame *leftBorder;
    QLabel *leftDownLong;
    QPushButton *BackToStartMenu;
    QLabel *leftUpLat;
    QFrame *upBorder;
    QLabel *answer;
    QLabel *rightDownLong;
    QLabel *rightUpLat;
    QFrame *rightBorder;

    void setupUi(QDialog *mapnomenclature)
    {
        if (mapnomenclature->objectName().isEmpty())
            mapnomenclature->setObjectName(QString::fromUtf8("mapnomenclature"));
        mapnomenclature->resize(626, 300);
        rightDownLat = new QLabel(mapnomenclature);
        rightDownLat->setObjectName(QString::fromUtf8("rightDownLat"));
        rightDownLat->setGeometry(QRect(480, 170, 81, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rightDownLat->sizePolicy().hasHeightForWidth());
        rightDownLat->setSizePolicy(sizePolicy);
        leftUpLong = new QLabel(mapnomenclature);
        leftUpLong->setObjectName(QString::fromUtf8("leftUpLong"));
        leftUpLong->setGeometry(QRect(290, 50, 91, 20));
        sizePolicy.setHeightForWidth(leftUpLong->sizePolicy().hasHeightForWidth());
        leftUpLong->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(mapnomenclature);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 191, 171));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        CalculateButton = new QPushButton(layoutWidget);
        CalculateButton->setObjectName(QString::fromUtf8("CalculateButton"));

        gridLayout_2->addWidget(CalculateButton, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Lat_deg = new QSpinBox(layoutWidget);
        Lat_deg->setObjectName(QString::fromUtf8("Lat_deg"));
        Lat_deg->setMaximum(89);

        horizontalLayout->addWidget(Lat_deg);

        Lat_min = new QSpinBox(layoutWidget);
        Lat_min->setObjectName(QString::fromUtf8("Lat_min"));
        Lat_min->setMaximum(59);

        horizontalLayout->addWidget(Lat_min);

        Lat_sec = new QDoubleSpinBox(layoutWidget);
        Lat_sec->setObjectName(QString::fromUtf8("Lat_sec"));
        Lat_sec->setMaximum(60.000000000000000);

        horizontalLayout->addWidget(Lat_sec);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Long_deg = new QSpinBox(layoutWidget);
        Long_deg->setObjectName(QString::fromUtf8("Long_deg"));
        Long_deg->setMaximum(179);

        horizontalLayout_2->addWidget(Long_deg);

        Long_min = new QSpinBox(layoutWidget);
        Long_min->setObjectName(QString::fromUtf8("Long_min"));
        Long_min->setMaximum(59);

        horizontalLayout_2->addWidget(Long_min);

        Long_sec = new QDoubleSpinBox(layoutWidget);
        Long_sec->setObjectName(QString::fromUtf8("Long_sec"));
        Long_sec->setMaximum(60.000000000000000);

        horizontalLayout_2->addWidget(Long_sec);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        ScalesBox = new QComboBox(layoutWidget);
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->addItem(QString());
        ScalesBox->setObjectName(QString::fromUtf8("ScalesBox"));

        gridLayout->addWidget(ScalesBox, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        leftDownLat = new QLabel(mapnomenclature);
        leftDownLat->setObjectName(QString::fromUtf8("leftDownLat"));
        leftDownLat->setGeometry(QRect(250, 170, 81, 20));
        sizePolicy.setHeightForWidth(leftDownLat->sizePolicy().hasHeightForWidth());
        leftDownLat->setSizePolicy(sizePolicy);
        rightUpLong = new QLabel(mapnomenclature);
        rightUpLong->setObjectName(QString::fromUtf8("rightUpLong"));
        rightUpLong->setGeometry(QRect(420, 50, 91, 20));
        sizePolicy.setHeightForWidth(rightUpLong->sizePolicy().hasHeightForWidth());
        rightUpLong->setSizePolicy(sizePolicy);
        downBorder = new QFrame(mapnomenclature);
        downBorder->setObjectName(QString::fromUtf8("downBorder"));
        downBorder->setGeometry(QRect(320, 180, 151, 16));
        downBorder->setFrameShape(QFrame::HLine);
        downBorder->setFrameShadow(QFrame::Sunken);
        leftBorder = new QFrame(mapnomenclature);
        leftBorder->setObjectName(QString::fromUtf8("leftBorder"));
        leftBorder->setGeometry(QRect(310, 80, 21, 111));
        leftBorder->setFrameShape(QFrame::VLine);
        leftBorder->setFrameShadow(QFrame::Sunken);
        leftDownLong = new QLabel(mapnomenclature);
        leftDownLong->setObjectName(QString::fromUtf8("leftDownLong"));
        leftDownLong->setGeometry(QRect(300, 190, 81, 20));
        sizePolicy.setHeightForWidth(leftDownLong->sizePolicy().hasHeightForWidth());
        leftDownLong->setSizePolicy(sizePolicy);
        BackToStartMenu = new QPushButton(mapnomenclature);
        BackToStartMenu->setObjectName(QString::fromUtf8("BackToStartMenu"));
        BackToStartMenu->setGeometry(QRect(480, 20, 83, 29));
        leftUpLat = new QLabel(mapnomenclature);
        leftUpLat->setObjectName(QString::fromUtf8("leftUpLat"));
        leftUpLat->setGeometry(QRect(250, 70, 91, 20));
        sizePolicy.setHeightForWidth(leftUpLat->sizePolicy().hasHeightForWidth());
        leftUpLat->setSizePolicy(sizePolicy);
        upBorder = new QFrame(mapnomenclature);
        upBorder->setObjectName(QString::fromUtf8("upBorder"));
        upBorder->setGeometry(QRect(320, 70, 151, 16));
        upBorder->setFrameShape(QFrame::HLine);
        upBorder->setFrameShadow(QFrame::Sunken);
        answer = new QLabel(mapnomenclature);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(330, 120, 141, 20));
        rightDownLong = new QLabel(mapnomenclature);
        rightDownLong->setObjectName(QString::fromUtf8("rightDownLong"));
        rightDownLong->setGeometry(QRect(440, 190, 81, 20));
        sizePolicy.setHeightForWidth(rightDownLong->sizePolicy().hasHeightForWidth());
        rightDownLong->setSizePolicy(sizePolicy);
        rightUpLat = new QLabel(mapnomenclature);
        rightUpLat->setObjectName(QString::fromUtf8("rightUpLat"));
        rightUpLat->setGeometry(QRect(480, 70, 91, 20));
        sizePolicy.setHeightForWidth(rightUpLat->sizePolicy().hasHeightForWidth());
        rightUpLat->setSizePolicy(sizePolicy);
        rightBorder = new QFrame(mapnomenclature);
        rightBorder->setObjectName(QString::fromUtf8("rightBorder"));
        rightBorder->setGeometry(QRect(460, 80, 21, 111));
        rightBorder->setFrameShape(QFrame::VLine);
        rightBorder->setFrameShadow(QFrame::Sunken);

        retranslateUi(mapnomenclature);

        QMetaObject::connectSlotsByName(mapnomenclature);
    } // setupUi

    void retranslateUi(QDialog *mapnomenclature)
    {
        mapnomenclature->setWindowTitle(QCoreApplication::translate("mapnomenclature", "Geomaks", nullptr));
        rightDownLat->setText(QString());
        leftUpLong->setText(QString());
        CalculateButton->setText(QCoreApplication::translate("mapnomenclature", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        ScalesBox->setItemText(0, QCoreApplication::translate("mapnomenclature", "1:1 000 000", nullptr));
        ScalesBox->setItemText(1, QCoreApplication::translate("mapnomenclature", "1:500 000", nullptr));
        ScalesBox->setItemText(2, QCoreApplication::translate("mapnomenclature", "1:200 000", nullptr));
        ScalesBox->setItemText(3, QCoreApplication::translate("mapnomenclature", "1:100 000", nullptr));
        ScalesBox->setItemText(4, QCoreApplication::translate("mapnomenclature", "1:50 000", nullptr));
        ScalesBox->setItemText(5, QCoreApplication::translate("mapnomenclature", "1:25 000", nullptr));
        ScalesBox->setItemText(6, QCoreApplication::translate("mapnomenclature", "1:10 000", nullptr));
        ScalesBox->setItemText(7, QCoreApplication::translate("mapnomenclature", "1:5 000", nullptr));
        ScalesBox->setItemText(8, QCoreApplication::translate("mapnomenclature", "1:2 000", nullptr));

        leftDownLat->setText(QString());
        rightUpLong->setText(QString());
        leftDownLong->setText(QString());
        BackToStartMenu->setText(QCoreApplication::translate("mapnomenclature", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        leftUpLat->setText(QString());
        answer->setText(QString());
        rightDownLong->setText(QString());
        rightUpLat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mapnomenclature: public Ui_mapnomenclature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPNOMENCLATURE_H
