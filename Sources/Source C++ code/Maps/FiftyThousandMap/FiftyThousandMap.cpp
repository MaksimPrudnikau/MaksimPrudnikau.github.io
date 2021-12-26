//
// Created by maksim on 12/26/21.
//

#include "FiftyThousandMap.h"

std::string FiftyThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = (borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad();
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    auto length = dx * MatrixSize - (MatrixSize - dy);
    int shift = floor(length / 4.0) * 4;
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
    else if (res == 4)
    {
        name = L"-Г";
    }
    else
    {
        name = L"-?";
    }

    return WstringToString(name);
}