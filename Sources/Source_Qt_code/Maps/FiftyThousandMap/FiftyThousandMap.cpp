//
// Created by maksim on 12/26/21.
//

#include "FiftyThousandMap.h"
#include <QString>

std::string FiftyThousandMap::GetNomenclature(Point point, Border borders)
{
    auto kek = previous.borders;
    double dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    auto length = dx * rowLength - (rowLength - dy);
    int shift = floor(length * 1.0 / correctAnswers) * correctAnswers;
    int res = length - shift;
    std::wstring name;
    if (res == 1)
    {
        name = L"-А";
    }
    else if (res == 2)
    {
        name = L"-Б";
    }
    else if (res == 3)
    {
        name = L"-В";
    }
    else if (res == 4 || res == 0)
    {
        name = L"-Г";
    }
    else
    {
        name = L"-?";
    }

    return WstringToString(name);
}

Point FiftyThousandMap::GetShift(std::string letter)
{
    Point point;
   
    const auto A = QStringLiteral("А");
    const auto B = QStringLiteral("Б");
    const auto V = QStringLiteral("В");
    const auto G = QStringLiteral("Г");
    const auto input = QString::fromStdString(letter);

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
