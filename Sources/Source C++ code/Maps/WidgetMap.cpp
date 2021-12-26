//
// Created by user on 21.12.2021.
//

#include "WidgetMap.h"
#include "OneMillionMap/OneMillionMap.h"
#include "FiveHundredThousandMap/FiveHundredThousandMap.h"
#include "TwoHundredThousandMap/TwoHundredThousandMap.h"

using namespace std;

WidgetMap WidgetMap::GetNomenclature(const Point point, const Scales scale)
{
    WidgetMap oneMillionMapWidget = OneMillionMap().GetWidgetMap(point);
    if (scale == M1_1_000_000)
    {
        return oneMillionMapWidget;
    }
    
    WidgetMap fiveHundredThousandMapWidget = FiveHundredThousandMap().GetWidgetMap(point);
    if (scale == M1_500_000)
    {
        return {{oneMillionMapWidget, fiveHundredThousandMapWidget}};
    }
    
    WidgetMap twoHundredThousandMap = TwoHundredThousandMap(oneMillionMapWidget).GetWidgetMap(point);
    if (scale == M1_200_000)
    {
        return {{oneMillionMapWidget, twoHundredThousandMap}};
    }

    return {};
}