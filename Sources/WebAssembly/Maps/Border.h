//
// Created by user on 21.12.2021.
//

#ifndef MAPS_BORDER_H
#define MAPS_BORDER_H
#include "Point.h"
struct Border
{
    Point leftUp, rightUp;
    Point leftDown, rightDown;

    // Automatically determines the coordinates of the borders
    // using the lower left as a base point
    void Grasp(Angle lengthByLatitude, Angle lengthByLongitude)
    {
        rightDown = Point(leftDown.Latitude, leftDown.Longitude + lengthByLongitude);
        leftUp = Point(leftDown.Latitude + lengthByLatitude, leftDown.Longitude);
        rightUp = Point(leftUp.Latitude, leftUp.Longitude + lengthByLongitude);
    }
};

#endif //MAPS_BORDER_H
