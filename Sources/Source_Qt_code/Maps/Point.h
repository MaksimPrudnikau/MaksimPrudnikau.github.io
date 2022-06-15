//
// Created by user on 21.12.2021.
//

#ifndef MAPS_POINT_H
#define MAPS_POINT_H
#include "Angle.h"
#include <string>
struct Point
{
    Angle Latitude;
    Angle Longitude;
    unsigned int occurencesByLatitude;
    unsigned int occurencesByLongitude;

    Point() = default;
    Point(Angle latitude, Angle longitude) : Latitude(latitude), Longitude(longitude) { occurencesByLatitude = 0; occurencesByLongitude = 0; }

    Point operator + (const Point& second)
    {
        return {{this->Latitude + second.Latitude}, {this->Longitude + second.Longitude}};
    }

    Point& operator += (const Point& second)
    {
        *this  = *this + second;
        return *this;
    }
};

#endif //MAPS_POINT_H
