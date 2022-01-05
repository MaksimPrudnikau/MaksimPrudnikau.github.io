//
// Created by user on 22.12.2021.
//

#include "FiveHundredThousandMap.h"
#include <locale>
#include <codecvt>
#include <string>
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

    return WstringToString(name);
}

Point FiveHundredThousandMap::GetShift(std::string letters)
{
    Point point;
    int latitude, longitude;
    const char A = (char)-64;
    const char B = (char)-63;
    const char V = (char)-62;
    const char G = (char)-61;

    if (letters[0] == A)
    {
        latitude = 1;
        longitude = 0;
    }
    else if (letters[0] == B)
    {
        latitude = 1;
        longitude = 1;
    }
    else if (letters[0] == V)
    {
        latitude = 0;
        longitude = 0;
    }
    else if (letters[0] == G)
    {
        latitude = 0;
        longitude = 1;
    }

    for (size_t i = 0; i < latitude; ++i)
    {
        point.Latitude += lengthByLatitude;
    }

    for (size_t i = 0; i < longitude; ++i)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}