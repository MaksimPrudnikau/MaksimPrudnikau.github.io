//
// Created by maksim on 12/26/21.
//

#include "FiftyThousandMap.h"
#include "QString"
std::string FiftyThousandMap::GetNomenclature(Point point, Border borders)
{
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
   
    int latitude = 0, longitude = 0;
    const auto A = QString::fromUtf8("А");
    const auto B = QString::fromUtf8("Б");
    const auto V = QString::fromUtf8("В");
    const auto G = QString::fromUtf8("Г");

    auto russianLetter = QString::fromStdString(letter);

    if (russianLetter == A)
    {
        latitude = 1;
        longitude = 0;
    }
    else if (russianLetter == B)
    {
        latitude = 1;
        longitude = 1;
    }
    else if (russianLetter == V)
    {
        latitude = 0;
        longitude = 0;
    }
    else if (russianLetter == G)
    {
        latitude = 0;
        longitude = 1;
    }

    for (size_t i = 0; i < latitude; ++i)
    {
        point.Latitude += lengthByLatitude;
    }

    for (size_t i = 0; i < longitude; ++i)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}
