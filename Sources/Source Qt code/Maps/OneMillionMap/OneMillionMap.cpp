//
// Created by user on 21.12.2021.
//

#include "OneMillionMap.h"
#include "string"
#include <cmath>
using namespace std;

std::string OneMillionMap::GetNomenclature(Point point, Border borders)
{
     int letterNumber = floor(point.Latitude.degrees / lengthByLatitude.degrees);
     int column = floor(point.Longitude.degrees / lengthByLongitude.degrees);
     return string() +  Alphabet[letterNumber] + "-" + to_string(column + 30 + 1);
}