//
// Created by maksim on 12/27/21.
//

#include "TenThousandMap.h"

std::string TenThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    auto length = dx * MatrixSize - (MatrixSize - dy);
    int shift = floor(length / correctAnswers) * correctAnswers;
    int res = length - shift;
    return "-" + std::to_string(res == 0 ? correctAnswers : res);
}

Point TenThousandMap::GetShift(std::string letter)
{
    Point point;

    int latitude = 0, longitude = 0;
    int number = std::stoi(letter);

    if (number == 1)
    {
        latitude = 1;
        longitude = 0;
    }
    else if (number == 2)
    {
        latitude = 1;
        longitude = 1;
    }
    else if (number == 3)
    {
        latitude = 0;
        longitude = 0;
    }
    else if (number == 4)
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