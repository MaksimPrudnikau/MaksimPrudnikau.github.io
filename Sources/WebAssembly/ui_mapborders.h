/********************************************************************************
** Form generated from reading UI file 'mapborders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPBORDERS_H
#define UI_MAPBORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapBorders
{
public:
    QPushButton *BackToStartMenu;
    QLabel *leftUpLong;
    QLabel *answer;
    QFrame *rightBorder;
    QLabel *rightUpLong;
    QFrame *downBorder;
    QLabel *leftUpLat;
    QLabel *rightUpLat;
    QLabel *rightDownLat;
    QLabel *leftDownLat;
    QFrame *leftBorder;
    QFrame *upBorder;
    QLabel *leftDownLong;
    QLabel *rightDownLong;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *nomenclature;
    QComboBox *ScalesBox;
    QPushButton *CalculateButton;

    void setupUi(QDialog *MapBorders)
    {
        if (MapBorders->objectName().isEmpty())
            MapBorders->setObjectName(QString::fromUtf8("MapBorders"));
        MapBorders->resize(400, 300);
        BackToStartMenu = new QPushButton(MapBorders);
        BackToStartMenu->setObjectName(QString::fromUtf8("BackToStartMenu"));
        BackToStartMenu->setGeometry(QRect(290, 20, 83, 29));
        leftUpLong = new QLabel(MapBorders);
        leftUpLong->setObjectName(QString::fromUtf8("leftUpLong"));
        leftUpLong->setGeometry(QRect(90, 130, 121, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftUpLong->sizePolicy().hasHeightForWidth());
        leftUpLong->setSizePolicy(sizePolicy);
        answer = new QLabel(MapBorders);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(130, 200, 141, 20));
        rightBorder = new QFrame(MapBorders);
        rightBorder->setObjectName(QString::fromUtf8("rightBorder"));
        rightBorder->setGeometry(QRect(260, 160, 21, 111));
        rightBorder->setFrameShape(QFrame::VLine);
        rightBorder->setFrameShadow(QFrame::Sunken);
        rightUpLong = new QLabel(MapBorders);
        rightUpLong->setObjectName(QString::fromUtf8("rightUpLong"));
        rightUpLong->setGeometry(QRect(220, 130, 131, 20));
        sizePolicy.setHeightForWidth(rightUpLong->sizePolicy().hasHeightForWidth());
        rightUpLong->setSizePolicy(sizePolicy);
        downBorder = new QFrame(MapBorders);
        downBorder->setObjectName(QString::fromUtf8("downBorder"));
        downBorder->setGeometry(QRect(120, 260, 151, 16));
        downBorder->setFrameShape(QFrame::HLine);
        downBorder->setFrameShadow(QFrame::Sunken);
        leftUpLat = new QLabel(MapBorders);
        leftUpLat->setObjectName(QString::fromUtf8("leftUpLat"));
        leftUpLat->setGeometry(QRect(10, 150, 111, 20));
        sizePolicy.setHeightForWidth(leftUpLat->sizePolicy().hasHeightForWidth());
        leftUpLat->setSizePolicy(sizePolicy);
        rightUpLat = new QLabel(MapBorders);
        rightUpLat->setObjectName(QString::fromUtf8("rightUpLat"));
        rightUpLat->setGeometry(QRect(280, 150, 111, 20));
        sizePolicy.setHeightForWidth(rightUpLat->sizePolicy().hasHeightForWidth());
        rightUpLat->setSizePolicy(sizePolicy);
        rightDownLat = new QLabel(MapBorders);
        rightDownLat->setObjectName(QString::fromUtf8("rightDownLat"));
        rightDownLat->setGeometry(QRect(280, 250, 111, 20));
        sizePolicy.setHeightForWidth(rightDownLat->sizePolicy().hasHeightForWidth());
        rightDownLat->setSizePolicy(sizePolicy);
        leftDownLat = new QLabel(MapBorders);
        leftDownLat->setObjectName(QString::fromUtf8("leftDownLat"));
        leftDownLat->setGeometry(QRect(10, 250, 101, 20));
        sizePolicy.setHeightForWidth(leftDownLat->sizePolicy().hasHeightForWidth());
        leftDownLat->setSizePolicy(sizePolicy);
        leftBorder = new QFrame(MapBorders);
        leftBorder->setObjectName(QString::fromUtf8("leftBorder"));
        leftBorder->setGeometry(QRect(110, 160, 21, 111));
        leftBorder->setFrameShape(QFrame::VLine);
        leftBorder->setFrameShadow(QFrame::Sunken);
        upBorder = new QFrame(MapBorders);
        upBorder->setObjectName(QString::fromUtf8("upBorder"));
        upBorder->setGeometry(QRect(120, 150, 151, 16));
        upBorder->setFrameShape(QFrame::HLine);
        upBorder->setFrameShadow(QFrame::Sunken);
        leftDownLong = new QLabel(MapBorders);
        leftDownLong->setObjectName(QString::fromUtf8("leftDownLong"));
        leftDownLong->setGeometry(QRect(100, 270, 101, 20));
        sizePolicy.setHeightForWidth(leftDownLong->sizePolicy().hasHeightForWidth());
        leftDownLong->setSizePolicy(sizePolicy);
        rightDownLong = new QLabel(MapBorders);
        rightDownLong->setObjectName(QString::fromUtf8("rightDownLong"));
        rightDownLong->setGeometry(QRect(240, 270, 111, 20));
        sizePolicy.setHeightForWidth(rightDownLong->sizePolicy().hasHeightForWidth());
        rightDownLong->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(MapBorders);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 30, 181, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nomenclature = new QLineEdit(layoutWidget);
        nomenclature->setObjectName(QString::fromUtf8("nomenclature"));

        verticalLayout->addWidget(nomenclature);

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

        verticalLayout->addWidget(ScalesBox);

        CalculateButton = new QPushButton(layoutWidget);
        CalculateButton->setObjectName(QString::fromUtf8("CalculateButton"));

        verticalLayout->addWidget(CalculateButton);


        retranslateUi(MapBorders);

        QMetaObject::connectSlotsByName(MapBorders);
    } // setupUi

    void retranslateUi(QDialog *MapBorders)
    {
        MapBorders->setWindowTitle(QCoreApplication::translate("MapBorders", "GeoMaks", nullptr));
        BackToStartMenu->setText(QCoreApplication::translate("MapBorders", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        leftUpLong->setText(QString());
        answer->setText(QString());
        rightUpLong->setText(QString());
        leftUpLat->setText(QString());
        rightUpLat->setText(QString());
        rightDownLat->setText(QString());
        leftDownLat->setText(QString());
        leftDownLong->setText(QString());
        rightDownLong->setText(QString());
        nomenclature->setPlaceholderText(QCoreApplication::translate("MapBorders", "\320\235\320\276\320\274\320\265\320\275\320\272\320\273\320\260\321\202\321\203\321\200\320\260", nullptr));
        ScalesBox->setItemText(0, QCoreApplication::translate("MapBorders", "1:1 000 000", nullptr));
        ScalesBox->setItemText(1, QCoreApplication::translate("MapBorders", "1:500 000", nullptr));
        ScalesBox->setItemText(2, QCoreApplication::translate("MapBorders", "1:200 000", nullptr));
        ScalesBox->setItemText(3, QCoreApplication::translate("MapBorders", "1:100 000", nullptr));
        ScalesBox->setItemText(4, QCoreApplication::translate("MapBorders", "1:50 000", nullptr));
        ScalesBox->setItemText(5, QCoreApplication::translate("MapBorders", "1:25 000", nullptr));
        ScalesBox->setItemText(6, QCoreApplication::translate("MapBorders", "1:10 000", nullptr));
        ScalesBox->setItemText(7, QCoreApplication::translate("MapBorders", "1:5 000", nullptr));
        ScalesBox->setItemText(8, QCoreApplication::translate("MapBorders", "1:2 000", nullptr));

        CalculateButton->setText(QCoreApplication::translate("MapBorders", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapBorders: public Ui_MapBorders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPBORDERS_H
