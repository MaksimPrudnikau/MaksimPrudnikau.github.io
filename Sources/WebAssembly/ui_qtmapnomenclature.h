/********************************************************************************
** Form generated from reading UI file 'qtmapnomenclature.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTMAPNOMENCLATURE_H
#define UI_QTMAPNOMENCLATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtMapNomenclature
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QLabel *coordinates;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *latitude;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_lng_gr;
    QLabel *label_10;
    QSpinBox *spinBox_lng_min;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox_lng_sec;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *longitude;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_lt_gr;
    QLabel *label_6;
    QSpinBox *spinBox_lt_min;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_lt_sec;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *scale;
    QSpacerItem *horizontalSpacer_10;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *calculation;
    QSpacerItem *horizontalSpacer_7;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtMapNomenclature)
    {
        if (QtMapNomenclature->objectName().isEmpty())
            QtMapNomenclature->setObjectName(QString::fromUtf8("QtMapNomenclature"));
        QtMapNomenclature->resize(571, 234);
        QtMapNomenclature->setMinimumSize(QSize(565, 0));
        QtMapNomenclature->setMaximumSize(QSize(80000, 44800));
        centralWidget = new QWidget(QtMapNomenclature);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 551, 191));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(verticalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        coordinates = new QLabel(verticalLayoutWidget);
        coordinates->setObjectName(QString::fromUtf8("coordinates"));
        coordinates->setMinimumSize(QSize(0, 35));
        coordinates->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(13);
        font.setKerning(true);
        coordinates->setFont(font);
        coordinates->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout->addWidget(coordinates);

        line_4 = new QFrame(verticalLayoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        latitude = new QLabel(verticalLayoutWidget);
        latitude->setObjectName(QString::fromUtf8("latitude"));
        QFont font1;
        font1.setPointSize(13);
        latitude->setFont(font1);

        horizontalLayout_4->addWidget(latitude);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        spinBox_lng_gr = new QSpinBox(verticalLayoutWidget);
        spinBox_lng_gr->setObjectName(QString::fromUtf8("spinBox_lng_gr"));
        QFont font2;
        font2.setPointSize(11);
        spinBox_lng_gr->setFont(font2);
        spinBox_lng_gr->setMinimum(32);
        spinBox_lng_gr->setMaximum(79);
        spinBox_lng_gr->setValue(52);
        spinBox_lng_gr->setDisplayIntegerBase(10);

        horizontalLayout_4->addWidget(spinBox_lng_gr);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        horizontalLayout_4->addWidget(label_10);

        spinBox_lng_min = new QSpinBox(verticalLayoutWidget);
        spinBox_lng_min->setObjectName(QString::fromUtf8("spinBox_lng_min"));
        spinBox_lng_min->setFont(font2);
        spinBox_lng_min->setMinimum(0);
        spinBox_lng_min->setMaximum(59);
        spinBox_lng_min->setValue(44);

        horizontalLayout_4->addWidget(spinBox_lng_min);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        horizontalLayout_4->addWidget(label_11);

        doubleSpinBox_lng_sec = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_lng_sec->setObjectName(QString::fromUtf8("doubleSpinBox_lng_sec"));
        doubleSpinBox_lng_sec->setFont(font2);
        doubleSpinBox_lng_sec->setDecimals(4);
        doubleSpinBox_lng_sec->setMaximum(59.999899999999997);
        doubleSpinBox_lng_sec->setSingleStep(0.000100000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_lng_sec);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line_3 = new QFrame(verticalLayoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        longitude = new QLabel(verticalLayoutWidget);
        longitude->setObjectName(QString::fromUtf8("longitude"));
        longitude->setFont(font1);

        horizontalLayout_3->addWidget(longitude);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        spinBox_lt_gr = new QSpinBox(verticalLayoutWidget);
        spinBox_lt_gr->setObjectName(QString::fromUtf8("spinBox_lt_gr"));
        spinBox_lt_gr->setFont(font2);
        spinBox_lt_gr->setMinimum(0);
        spinBox_lt_gr->setMaximum(179);
        spinBox_lt_gr->setValue(30);
        spinBox_lt_gr->setDisplayIntegerBase(10);

        horizontalLayout_3->addWidget(spinBox_lt_gr);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_3->addWidget(label_6);

        spinBox_lt_min = new QSpinBox(verticalLayoutWidget);
        spinBox_lt_min->setObjectName(QString::fromUtf8("spinBox_lt_min"));
        spinBox_lt_min->setFont(font2);
        spinBox_lt_min->setMinimum(0);
        spinBox_lt_min->setMaximum(59);
        spinBox_lt_min->setValue(44);

        horizontalLayout_3->addWidget(spinBox_lt_min);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);

        doubleSpinBox_lt_sec = new QDoubleSpinBox(verticalLayoutWidget);
        doubleSpinBox_lt_sec->setObjectName(QString::fromUtf8("doubleSpinBox_lt_sec"));
        doubleSpinBox_lt_sec->setFont(font2);
        doubleSpinBox_lt_sec->setDecimals(4);
        doubleSpinBox_lt_sec->setMaximum(59.999899999999997);
        doubleSpinBox_lt_sec->setSingleStep(0.000100000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_lt_sec);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 13, -1, -1);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        scale = new QLabel(verticalLayoutWidget);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMinimumSize(QSize(0, 20));
        scale->setMaximumSize(QSize(16777215, 30));
        scale->setFont(font1);

        horizontalLayout->addWidget(scale);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(140, 25));
        comboBox->setFont(font2);

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        calculation = new QPushButton(verticalLayoutWidget);
        calculation->setObjectName(QString::fromUtf8("calculation"));
        calculation->setMinimumSize(QSize(110, 30));
        calculation->setMaximumSize(QSize(110, 30));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(false);
        calculation->setFont(font3);

        horizontalLayout->addWidget(calculation);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout);

        QtMapNomenclature->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtMapNomenclature);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtMapNomenclature->setStatusBar(statusBar);

        retranslateUi(QtMapNomenclature);

        QMetaObject::connectSlotsByName(QtMapNomenclature);
    } // setupUi

    void retranslateUi(QMainWindow *QtMapNomenclature)
    {
        QtMapNomenclature->setWindowTitle(QCoreApplication::translate("QtMapNomenclature", "QtMapNomenclature", nullptr));
        coordinates->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213</span></p></body></html>", nullptr));
        latitude->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\250\320\270\321\200\320\276\321\202\320\260 (B):</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\302\260</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">'</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">''</span></p></body></html>", nullptr));
        longitude->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\224\320\276\320\273\320\263\320\276\321\202\320\260 (L):</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">\302\260</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">'</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p><span style=\" font-size:14pt;\">''</span></p></body></html>", nullptr));
        scale->setText(QCoreApplication::translate("QtMapNomenclature", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\274\320\260\321\201\321\210\321\202\320\260\320\261</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("QtMapNomenclature", "1 : 1 000 000", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("QtMapNomenclature", "1 : 100 000", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("QtMapNomenclature", "1 : 50 000", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("QtMapNomenclature", "1 : 25 000", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("QtMapNomenclature", "1 : 10 000", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("QtMapNomenclature", "1 : 5 000", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("QtMapNomenclature", "1 : 2 000", nullptr));

        comboBox->setPlaceholderText(QCoreApplication::translate("QtMapNomenclature", "1: 5000", nullptr));
        calculation->setText(QCoreApplication::translate("QtMapNomenclature", "\320\240\320\260\321\201\321\207\321\221\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtMapNomenclature: public Ui_QtMapNomenclature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMAPNOMENCLATURE_H
