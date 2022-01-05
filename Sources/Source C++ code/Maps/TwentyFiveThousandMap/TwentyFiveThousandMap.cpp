//
// Created by maksim on 12/26/21.
//

#include "TwentyFiveThousandMap.h"

std::string TwentyFiveThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    auto length = dx * MatrixSize - (MatrixSize - dy);
    int shift = floor(length / correctAnswers) * correctAnswers;
    int res = length - shift;
    std::wstring name;
    if (res == 1)
    {
        name = L"-а";
    }
    else if (res == 2)
    {
        name = L"-б";
    }
    else if (res == 3)
    {
        name = L"-в";
    }
    else if (res == 4 || res == 0)
    {
        name = L"-г";
    }
    else
    {
        name = L"-?";
    }

    return WstringToString(name);
}

Point TwentyFiveThousandMap::GetShift(std::string letter)
{
    Point point;

    int latitude = 0, longitude = 0;
    const char A = (char)-32;
    const char B = (char)-61;
    const char V = (char)-30;
    const char G = (char)-29;

    if (letter[0] == A)
    {
        latitude = 1;
        longitude = 0;
    }
    else if (letter[0] == B)
    {
        latitude = 1;
        longitude = 1;
    }
    else if (letter[0] == V)
    {
        latitude = 0;
        longitude = 0;
    }
    else if (letter[0] == G)
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