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
