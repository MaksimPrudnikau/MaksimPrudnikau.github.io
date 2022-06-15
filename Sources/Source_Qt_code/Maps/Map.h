//
// Created by user on 21.12.2021.
//

#ifndef MAPS_MAP_H
#define MAPS_MAP_H
#pragma once
#include "WidgetMap.h"
#include <locale>
#include <codecvt>
#include <string>
const std::string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

struct Map
{
    WidgetMap GetWidgetMap(Point point, std::string scale)
    {
        WidgetMap map;
        map.borders = GetBorder(point);
        map.Name = GetNomenclature(point, map.borders);
        map.Scale = scale;
        return map;
    }

protected:

    virtual Angle getLengthByLatitude() = 0;
    virtual Angle getLengthByLongitude() = 0;

    static std::string WstringToString(const std::wstring& source)
    {
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        return converter.to_bytes(source);
    }

    static Angle roundToClosest(Angle angle, Angle length)
    {
        Angle closestAngle;
        while (closestAngle + length < angle)
        {
            closestAngle += length;
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

        return closestAngle;
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
