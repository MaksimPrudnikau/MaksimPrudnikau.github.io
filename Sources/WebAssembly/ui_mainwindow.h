/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *answer;
    QLabel *leftUpLat;
    QLabel *leftUpLong;
    QLabel *rightUpLong;
    QLabel *rightUpLat;
    QLabel *leftDownLat;
    QLabel *leftDownLong;
    QLabel *rightDownLong;
    QLabel *rightDownLat;
    QFrame *downBorder;
    QFrame *leftBorder;
    QFrame *upBorder;
    QFrame *rightBorder;
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
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(571, 231);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(45);
        sizePolicy.setVerticalStretch(45);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        answer = new QLabel(centralwidget);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(330, 110, 141, 20));
        leftUpLat = new QLabel(centralwidget);
        leftUpLat->setObjectName(QString::fromUtf8("leftUpLat"));
        leftUpLat->setGeometry(QRect(250, 60, 91, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftUpLat->sizePolicy().hasHeightForWidth());
        leftUpLat->setSizePolicy(sizePolicy1);
        leftUpLong = new QLabel(centralwidget);
        leftUpLong->setObjectName(QString::fromUtf8("leftUpLong"));
        leftUpLong->setGeometry(QRect(290, 40, 91, 20));
        sizePolicy1.setHeightForWidth(leftUpLong->sizePolicy().hasHeightForWidth());
        leftUpLong->setSizePolicy(sizePolicy1);
        rightUpLong = new QLabel(centralwidget);
        rightUpLong->setObjectName(QString::fromUtf8("rightUpLong"));
        rightUpLong->setGeometry(QRect(420, 40, 91, 20));
        sizePolicy1.setHeightForWidth(rightUpLong->sizePolicy().hasHeightForWidth());
        rightUpLong->setSizePolicy(sizePolicy1);
        rightUpLat = new QLabel(centralwidget);
        rightUpLat->setObjectName(QString::fromUtf8("rightUpLat"));
        rightUpLat->setGeometry(QRect(480, 60, 91, 20));
        sizePolicy1.setHeightForWidth(rightUpLat->sizePolicy().hasHeightForWidth());
        rightUpLat->setSizePolicy(sizePolicy1);
        leftDownLat = new QLabel(centralwidget);
        leftDownLat->setObjectName(QString::fromUtf8("leftDownLat"));
        leftDownLat->setGeometry(QRect(250, 160, 81, 20));
        sizePolicy1.setHeightForWidth(leftDownLat->sizePolicy().hasHeightForWidth());
        leftDownLat->setSizePolicy(sizePolicy1);
        leftDownLong = new QLabel(centralwidget);
        leftDownLong->setObjectName(QString::fromUtf8("leftDownLong"));
        leftDownLong->setGeometry(QRect(300, 180, 81, 20));
        sizePolicy1.setHeightForWidth(leftDownLong->sizePolicy().hasHeightForWidth());
        leftDownLong->setSizePolicy(sizePolicy1);
        rightDownLong = new QLabel(centralwidget);
        rightDownLong->setObjectName(QString::fromUtf8("rightDownLong"));
        rightDownLong->setGeometry(QRect(440, 180, 81, 20));
        sizePolicy1.setHeightForWidth(rightDownLong->sizePolicy().hasHeightForWidth());
        rightDownLong->setSizePolicy(sizePolicy1);
        rightDownLat = new QLabel(centralwidget);
        rightDownLat->setObjectName(QString::fromUtf8("rightDownLat"));
        rightDownLat->setGeometry(QRect(480, 160, 81, 20));
        sizePolicy1.setHeightForWidth(rightDownLat->sizePolicy().hasHeightForWidth());
        rightDownLat->setSizePolicy(sizePolicy1);
        downBorder = new QFrame(centralwidget);
        downBorder->setObjectName(QString::fromUtf8("downBorder"));
        downBorder->setGeometry(QRect(320, 170, 151, 16));
        downBorder->setFrameShape(QFrame::HLine);
        downBorder->setFrameShadow(QFrame::Sunken);
        leftBorder = new QFrame(centralwidget);
        leftBorder->setObjectName(QString::fromUtf8("leftBorder"));
        leftBorder->setGeometry(QRect(310, 70, 21, 111));
        leftBorder->setFrameShape(QFrame::VLine);
        leftBorder->setFrameShadow(QFrame::Sunken);
        upBorder = new QFrame(centralwidget);
        upBorder->setObjectName(QString::fromUtf8("upBorder"));
        upBorder->setGeometry(QRect(320, 60, 151, 16));
        upBorder->setFrameShape(QFrame::HLine);
        upBorder->setFrameShadow(QFrame::Sunken);
        rightBorder = new QFrame(centralwidget);
        rightBorder->setObjectName(QString::fromUtf8("rightBorder"));
        rightBorder->setGeometry(QRect(460, 70, 21, 111));
        rightBorder->setFrameShape(QFrame::VLine);
        rightBorder->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 183, 171));
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
        Long_deg->setMaximum(89);

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

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        answer->setText(QString());
        leftUpLat->setText(QString());
        leftUpLong->setText(QString());
        rightUpLong->setText(QString());
        rightUpLat->setText(QString());
        leftDownLat->setText(QString());
        leftDownLong->setText(QString());
        rightDownLong->setText(QString());
        rightDownLat->setText(QString());
        CalculateButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        ScalesBox->setItemText(0, QCoreApplication::translate("MainWindow", "1:1 000 000", nullptr));
        ScalesBox->setItemText(1, QCoreApplication::translate("MainWindow", "1:500 000", nullptr));
        ScalesBox->setItemText(2, QCoreApplication::translate("MainWindow", "1:200 000", nullptr));
        ScalesBox->setItemText(3, QCoreApplication::translate("MainWindow", "1:100 000", nullptr));
        ScalesBox->setItemText(4, QCoreApplication::translate("MainWindow", "1:50 000", nullptr));
        ScalesBox->setItemText(5, QCoreApplication::translate("MainWindow", "1:25 000", nullptr));
        ScalesBox->setItemText(6, QCoreApplication::translate("MainWindow", "1:10 000", nullptr));
        ScalesBox->setItemText(7, QCoreApplication::translate("MainWindow", "1:5 000", nullptr));
        ScalesBox->setItemText(8, QCoreApplication::translate("MainWindow", "1:2 000", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
