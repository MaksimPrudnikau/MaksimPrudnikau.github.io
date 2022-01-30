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
    auto rows = Alphabet.find(letters[0]);
    auto column = stoi(letters[1]) - 30 - 1;
    if (column < 0)
        throw L"Не поддерживаемый формат номенклатуры";

    for (size_t i = 0; i < rows; ++i)
    {
        point.Latitude += lengthByLatitude;
    }

    for (size_t i = 0; i < column; ++i)
    {
        point.Longitude += lengthByLongitude;
    }

    return point;
}
