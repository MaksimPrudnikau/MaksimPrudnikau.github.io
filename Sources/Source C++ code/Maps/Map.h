//
// Created by user on 21.12.2021.
//

#ifndef MAPS_MAP_H
#define MAPS_MAP_H
#include "WidgetMap.h"
#include "string"
const std::string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

struct Map
{
    WidgetMap GetWidgetMap(Point point)
    {
        WidgetMap map;
        map.borders = GetBorder(point);
        map.Name = GetNomenclature(point, map.borders);
        return map;
    }

protected:
    virtual Angle getLengthByLatitude() = 0;
    virtual Angle getLengthByLongitude() = 0;

    static Angle roundToClosest(Angle latitude, Angle length)
    {
        double latitudeInGrad = latitude.ToGrad();
        double lengthInGrad = length.ToGrad();
        double closestLatitude = 0;
        while (closestLatitude + lengthInGrad < latitudeInGrad)
        {
            closestLatitude += lengthInGrad;
        }

        return Angle::ToAngle(closestLatitude);
    }

    static Point roundToClosestLeftDown(Point point, Angle lengthLatitude, Angle lengthLongitude)
    {
        point.Latitude = roundToClosest(point.Latitude, lengthLatitude);
        point.Longitude = roundToClosest(point.Longitude, lengthLongitude);
        return point;
    }

    Border GetBorder(Point point)
    {
        Angle latitudeLength = getLengthByLatitude();
        Angle longitudeLength = getLengthByLongitude();
        Border borders;
        borders.leftDown = roundToClosestLeftDown(point, latitudeLength, longitudeLength);
        borders.Grasp(latitudeLength, longitudeLength);
        return borders;
    }

    virtual std::string GetNomenclature(Point point, Border borders) = 0;
};

#endif //MAPS_MAP_H
