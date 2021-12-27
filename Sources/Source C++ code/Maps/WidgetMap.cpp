//
// Created by user on 21.12.2021.
//

#include "WidgetMap.h"
#include "OneMillionMap/OneMillionMap.h"
#include "FiveHundredThousandMap/FiveHundredThousandMap.h"
#include "TwoHundredThousandMap/TwoHundredThousandMap.h"
#include "OneHundredThousandMap/OneHundredThousandMap.h"
#include "FiftyThousandMap/FiftyThousandMap.h"
#include "TwentyFiveThousandMap/TwentyFiveThousandMap.h"
#include "TenThousandMap/TenThousandMap.h"
#include "FiveThousandMap/FiveThousandMap.h"
#include "TwoThousandMap/TwoThousandMap.h"

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

    WidgetMap oneHundredThousandMap = OneHundredThousandMap(oneMillionMapWidget).GetWidgetMap(point);
    if (scale == M1_100_000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap} };
    }

    WidgetMap fiftyThousandMap = FiftyThousandMap(oneHundredThousandMap).GetWidgetMap(point);
    if (scale == M1_50_000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap, fiftyThousandMap} };
    }

    WidgetMap twentyFiveThousandMap = TwentyFiveThousandMap(fiftyThousandMap).GetWidgetMap(point);
    if (scale == M1_25_000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap, fiftyThousandMap, twentyFiveThousandMap} };
    }

    WidgetMap tenThousandMap = TenThousandMap(twentyFiveThousandMap).GetWidgetMap(point);
    if (scale == M1_10_000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap, fiftyThousandMap, twentyFiveThousandMap, tenThousandMap} };
    }

    WidgetMap fiveThousandMap = FiveThousandMap(oneHundredThousandMap).GetWidgetMap(point);
    if (scale == M1_5000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap, fiveThousandMap} };
    }

    WidgetMap twoThousandMap = TwoThousandMap(fiveThousandMap).GetWidgetMap(point);
    if (scale == M1_2000)
    {
        return { {oneMillionMapWidget, oneHundredThousandMap, fiveThousandMap, twoThousandMap} };
    }

    return {};
}