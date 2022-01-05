//
// Created by maksim on 12/27/21.
//

#include "TwoThousandMap.h"

std::string TwoThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    int length = dx * RowLength - (RowLength - dy);
    std::wstring name;
    switch (length)
    {
        case 1:
            name = L"-а";
            break;
        case 2:
            name = L"-б";
            break;
        case 3:
            name = L"-в";
            break;
        case 4:
            name = L"-г";
            break;
        case 5:
            name = L"-д";
            break;
        case 6:
            name = L"-е";
            break;
        case 7:
            name = L"-ж";
            break;
        case 8:
            name = L"-з";
            break;
        case 9:
            name = L"-и";
            break;
        default:
            name = L"-?";
    }

    return WstringToString(name) + ")";
}
