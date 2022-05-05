//
// Created by user on 21.12.2021.
//

#ifndef MAPS_WIDGETMAP_H
#define MAPS_WIDGETMAP_H
#include "Point.h"
#include "Border.h"
#include <string>
#include <vector>
#include <regex>
using namespace std;
enum Scales
{
    M1_2000 = 8,
    M1_5000 = 7,
    M1_10_000 = 6,
    M1_25_000 = 5,
    M1_50_000 = 4,
    M1_100_000 = 3,
    M1_200_000 = 2,
    M1_500_000 = 1,
    M1_1_000_000 = 0,
};

struct WidgetMap
{
    std::string Name;
    Border borders;

    WidgetMap() = default;

    WidgetMap(const std::vector<WidgetMap>& maps)
    {
        for (const auto& map : maps)
        {
            Name += map.Name;
            borders = map.borders;
        }
    }
    
    static WidgetMap GetNomenclature(Point point, Scales scale);
    static WidgetMap GetBorders(const std::string& nomenclature);

private:
    static Scales GetScale(const std::string& nomenclature);
};

#endif //MAPS_WIDGETMAP_H
