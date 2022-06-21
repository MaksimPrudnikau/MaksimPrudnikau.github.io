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

    int number = std::stoi(letter);

    if (number == 1)
    {
         point.Latitude += lengthByLatitude;
    }
    else if (number == 2)
    {
        point.Latitude += lengthByLatitude;
        point.Longitude += lengthByLongitude;
    }
    else if (number == 3)
    {
    }
    else if (number == 4)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}
