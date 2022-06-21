//
// Created by user on 22.12.2021.
//

#include "FiveHundredThousandMap.h"
#include <locale>
#include <codecvt>
#include <string>
#include <QString>
using namespace std;

// Formed by dividing the millionth sheet into four parts,
// where dx is the distance from latitude,
// dy is the distance from longitude relative to leftDown
std::string FiveHundredThousandMap::GetNomenclature(Point point, Border borders)
{
    const int horizontalCenter = lengthByLongitude.degrees;
    const double verticalCenter = lengthByLatitude.degrees;
    double dx = (point.Latitude - borders.leftDown.Latitude).ToGrad();
    double dy = (point.Longitude - borders.leftDown.Longitude).ToGrad();
    wstring name;
    if (dx <= horizontalCenter && dy >= verticalCenter)
    {
        name = L"-A";
    }
    else if (dx >= horizontalCenter && dy >= verticalCenter)
    {
        name = L"-Б";
    }
    else if (dx <= horizontalCenter && dy <= verticalCenter)
    {
        name = L"-В";
    }
    else if (dx >= horizontalCenter && dy <= verticalCenter)
    {
        name = L"-Г";
    }
    else
    {
        name = L"-?";
    }

    return WstringToString(name);
}

Point FiveHundredThousandMap::GetShift(std::string letters)
{
    Point point;
    int latitude, longitude;
    const QString A = QStringLiteral("А");
    const QString B = QStringLiteral("Б");
    const QString V = QStringLiteral("В");
    const QString G = QStringLiteral("Г");
    auto input = QString::fromStdString(letters);

    if (QString::compare(input, A, Qt::CaseInsensitive) == 0)
    {
        point.Latitude += lengthByLatitude;
    }
    else if (QString::compare(input, B, Qt::CaseInsensitive) == 0)
    {
        point.Latitude += lengthByLatitude;
        point.Longitude += lengthByLongitude;
    }
    else if (QString::compare(input, V, Qt::CaseInsensitive) == 0)
    {
    }
    else if (QString::compare(input, G, Qt::CaseInsensitive) == 0)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}
