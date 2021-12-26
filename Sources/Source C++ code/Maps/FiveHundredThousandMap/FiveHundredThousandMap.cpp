//
// Created by user on 22.12.2021.
//

#include "FiveHundredThousandMap.h"
#include "string"
using namespace std;

// Formed by dividing the millionth sheet into four parts,
// where dx is the distance from latitude,
// dy is the distance from longitude relative to leftDown
std::string FiveHundredThousandMap::GetNomenclature(Point point, Border borders)
{
    const int horizontalCenter = lengthByLongitude.degrees;
    const double verticalCenter = lengthByLatitude.degrees;
    double dx = (point.Latitude - borders.leftDown.Latitude).ToGrad();
    double dy = (point.Longitude - borders.leftDown.Longitude).ToGrad();
    wstring name;
    if (dx <= horizontalCenter && dy >= verticalCenter)
    {
        name = L"-A";
    }
    else if (dx >= horizontalCenter && dy >= verticalCenter)
    {
        name = L"-Б";
    }
    else if (dx <= horizontalCenter && dy <= verticalCenter)
    {
        name = L"-В";
    }
    else if (dx >= horizontalCenter && dy <= verticalCenter)
    {
        name = L"-Г";
    }
    else
    {
        name = L"-?";
    }
    
    return narrow(name);
}