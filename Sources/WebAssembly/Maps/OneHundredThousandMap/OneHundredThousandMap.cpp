//
// Created by maksim on 12/26/21.
//

#include "OneHundredThousandMap.h"

std::string OneHundredThousandMap::GetNomenclature(Point point, Border borders)
{
    int dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    int dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    return "-" + std::to_string(dx * rowLength - (rowLength - dy));
}

Point OneHundredThousandMap::GetShift(std::string number)
{
    Point point;
    int value = std::stoi(number);
    int row = floor(value / rowLength);
    int col = 1;
    if (row % rowLength == 0)
    {
        col = rowLength;
    }
    else
    {
        while (row * rowLength + col != value)
        {
            col++;
        }
    }

    row = rowLength - row - 1;

    for (int i = 0; i < row; i++)
    {
        point.Latitude += lengthByLatitude;
    }

    for (int i = 0; i < col - 1; i++)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}
