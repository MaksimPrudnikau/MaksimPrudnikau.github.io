//
// Created by user on 21.12.2021.
//

#include "WidgetMap.h"
#include "OneMillionMap/OneMillionMap.h"

using namespace std;
WidgetMap WidgetMap::GetNomenclature(const Point point, const Scales scale)
{
    WidgetMap map;
    switch (scale)
    {
        case M1_2000:
            break;
        case M1_5000:
            break;
        case M1_10_000:
            break;
        case M1_25_000:
            break;
        case M1_50_000:
            break;
        case M1_100_000:
            break;
        case M1_500_000:
            break;
        case M1_1_000_000:
            OneMillionMap oneMillionMap;
            map = oneMillionMap.GetWidgetMap(point);
            break;
    }

    return map;
}