//
// Created by user on 21.12.2021.
//

#ifndef MAPS_POINT_H
#define MAPS_POINT_H
#include "Angle.h"
struct Point
{
    Angle Latitude;
    Angle Longitude;

    Point() = default;
    Point(Angle latitude, Angle longitude) : Latitude(latitude), Longitude(longitude) {}
};

#endif //MAPS_POINT_H
