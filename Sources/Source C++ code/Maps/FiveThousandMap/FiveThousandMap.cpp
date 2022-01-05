//
// Created by maksim on 12/27/21.
//

#include "FiveThousandMap.h"

std::string FiveThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    int length = rowLength * (dx - 1) + dy;
    return "(" + std::to_string(length) + ")";
}
Point FiveThousandMap::GetShift(std::string number)
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