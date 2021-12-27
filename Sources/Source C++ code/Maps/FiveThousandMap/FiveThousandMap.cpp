//
// Created by maksim on 12/27/21.
//

#include "FiveThousandMap.h"

std::string FiveThousandMap::GetNomenclature(Point point, Border borders)
{
    double dx = (borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad();
    double dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    int length = dx * RowLength - (RowLength - dy);
    int shift = floor(length / correctAnswers) * correctAnswers;
    int res = length - shift;
    return "(" + std::to_string(res == 0 ? MatrixSize : res) + ")";
}