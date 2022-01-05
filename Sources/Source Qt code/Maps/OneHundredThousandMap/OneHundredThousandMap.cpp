//
// Created by maksim on 12/26/21.
//

#include "OneHundredThousandMap.h"

std::string OneHundredThousandMap::GetNomenclature(Point point, Border borders)
{
    int dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    int dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    return "-" + std::to_string(dx * MatrixSize - (MatrixSize - dy));
}
