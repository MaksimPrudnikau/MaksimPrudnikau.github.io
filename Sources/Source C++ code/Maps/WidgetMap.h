//
// Created by user on 21.12.2021.
//

#ifndef MAPS_WIDGETMAP_H
#define MAPS_WIDGETMAP_H
#include "Point.h"
#include "Border.h"
#include <string>
#include <vector>
enum Scales
{
    M1_2000,
    M1_5000,
    M1_10_000,
    M1_25_000,
    M1_50_000,
    M1_100_000,
    M1_200_000,
    M1_500_000,
    M1_1_000_000,
};

struct WidgetMap
{
    std::string Name;
    Border borders;
    
    WidgetMap() = default;

    WidgetMap(std::vector<WidgetMap> maps)
    {
        for (auto map : maps)
        {
            Name += map.Name;
            borders = map.borders;
        }
    }
    
    static WidgetMap GetNomenclature(Point point, Scales scale);
};

#endif //MAPS_WIDGETMAP_H
