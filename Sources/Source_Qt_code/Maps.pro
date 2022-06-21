QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++2a

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Maps/FiftyThousandMap/FiftyThousandMap.cpp \
    Maps/FiveHundredThousandMap/FiveHundredThousandMap.cpp \
    Maps/FiveThousandMap/FiveThousandMap.cpp \
    Maps/OneHundredThousandMap/OneHundredThousandMap.cpp \
    Maps/OneMillionMap/OneMillionMap.cpp \
    Maps/TenThousandMap/TenThousandMap.cpp \
    Maps/TwentyFiveThousandMap/TwentyFiveThousandMap.cpp \
    Maps/TwoHundredThousandMap/TwoHundredThousandMap.cpp \
    Maps/TwoThousandMap/TwoThousandMap.cpp \
    Maps/WidgetMap.cpp \
    main.cpp \
    mapnomenclature.cpp \
    startmenu.cpp

HEADERS += \
    Maps/Angle.h \
    Maps/Border.h \
    Maps/FiftyThousandMap/FiftyThousandMap.h \
    Maps/FiveHundredThousandMap/FiveHundredThousandMap.h \
    Maps/FiveThousandMap/FiveThousandMap.h \
    Maps/Map.h \
    Maps/OneHundredThousandMap/OneHundredThousandMap.h \
    Maps/OneMillionMap/OneMillionMap.h \
    Maps/Point.h \
    Maps/TenThousandMap/TenThousandMap.h \
    Maps/TwentyFiveThousandMap/TwentyFiveThousandMap.h \
    Maps/TwoHundredThousandMap/TwoHundredThousandMap.h \
    Maps/TwoThousandMap/TwoThousandMap.h \
    Maps/WidgetMap.h \
    mapnomenclature.h \
    startmenu.h

FORMS += \
    mapnomenclature.ui \
    startmenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
