//
// Created by maksim on 12/27/21.
//

#include "TwoThousandMap.h"

std::string TwoThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = floor((point.Latitude - borders.leftUp.Latitude).ToGrad()) / lengthByLatitude.ToGrad();
    double dy = floor((point.Longitude - borders.leftUp.Longitude).ToGrad()) / lengthByLongitude.ToGrad();
    int length = dx + dy;
    std::wstring name;
    switch (length)
    {
        case 0:
            name = L"-а";
            break;
        case 1:
            name = L"-б";
            break;
        case 2:
            name = L"-в";
            break;
        case 3:
            name = L"-г";
            break;
        case 4:
            name = L"-д";
            break;
        case 5:
            name = L"-е";
            break;
        case 6:
            name = L"-ж";
            break;
        case 7:
            name = L"-з";
            break;
        case 8:
            name = L"-и";
            break;
        default:
            name = L"-?";
    }

    return WstringToString(name) + ")";
}

Point TwoThousandMap::GetShift(std::string word)
{
    Point point;
    const std::string letters = "абвгдежзи";
    int value = letters.find(word) + 1;
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
