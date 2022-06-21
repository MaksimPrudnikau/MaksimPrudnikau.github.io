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
    int counter = 1;
    for (int i = 0; i < rowLength - 1; ++i)
      {
        point.Latitude += lengthByLatitude;
      }

    Angle diffFromLeft;
    for (int i = 0; i < rowLength; i++)
    {
        diffFromLeft = Angle(0, 0, 0);
        for (int j = 0; j < rowLength; j++, ++counter)
        {
            if (counter == value) break;
            diffFromLeft += lengthByLongitude;
        }

        if (counter == value) break;
        point.Latitude = point.Latitude - lengthByLatitude;
    }

    point.Longitude += diffFromLeft;

    return point;
}
