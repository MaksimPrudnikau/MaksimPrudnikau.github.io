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

Point OneMillionMap::GetShift(std::vector<std::string> letters)
{
    Point point;

    for (int i = 0; string(1, Alphabet[i]).compare(letters.at(0)) != 0; ++i)
      {
        point.Latitude += lengthByLatitude;
      }

    auto cols = stoi(letters.at(1)) - 31;
    for (int i = 0; i < cols; ++i)
      {
        point.Longitude += lengthByLongitude;
      }

    return point;
}
