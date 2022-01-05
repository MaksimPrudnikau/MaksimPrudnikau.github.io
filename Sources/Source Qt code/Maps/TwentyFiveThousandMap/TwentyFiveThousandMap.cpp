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
