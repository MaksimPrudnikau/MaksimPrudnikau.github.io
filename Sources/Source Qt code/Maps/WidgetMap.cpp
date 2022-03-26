//
// Created by user on 21.12.2021.
//

#pragma once
#include "Map.h"
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

const vector<string> split(string s, string delimiter) 
{
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

const Point GetOneMillionMap(const vector<string>& letters)
{
    Point point =
    {
        {0, 0, 0.001},
        {0, 0, 0.001}
    };

    Angle base = { 0, 0, 00.1 };
    point += OneMillionMap().GetShift({ letters.at(0), letters.at(1)});
    return point;
}

const Point GetFiveHundredThousandMap(const vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    auto map = FiveHundredThousandMap();
    point += map.GetShift(letters.at(2));
    return point;
}

const Point GetTwoHundredThousandMap(const vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    point += TwoHundredThousandMap().GetShift(letters.at(2));
    return point;
}

const Point GetOneHundredThousandMap(const vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    point += OneHundredThousandMap().GetShift(letters.at(2));

    return point;
}

const Point GetFiftyThousandMap(const vector<string>& letters)
{
    Point point = GetOneHundredThousandMap(letters);
    point += FiftyThousandMap().GetShift(letters.at(3));
    return point;
}

const Point GetTwentyFiveThousandMap(const vector<string>& letters)
{
    Point point = GetFiftyThousandMap(letters);
    point += TwentyFiveThousandMap().GetShift(letters.at(4));
    return point;
}

const Point GetTenThousandMap(const vector<string>& letters)
{
    Point point = GetTwentyFiveThousandMap(letters);
    point += TenThousandMap().GetShift(letters.at(5));
    return point;
}

const Point GetFiveThousandMap(const vector<string>& letters)
{
    Point point = GetOneHundredThousandMap(letters);
    auto element = letters.at(3);
    element.erase(0, 1);
    element.erase(element.size() - 1, 1);
    point += FiveThousandMap().GetShift(element);
    return point;
}

const Point GetTwoThousandMap(const vector<string>& letters)
{
    Point point = GetFiveThousandMap(letters);
    auto element = letters.at(4);
    element.erase(element.size() - 1, 1);
    point += TwoThousandMap().GetShift(element);
    return point;
}

WidgetMap WidgetMap::GetBorders(const string& nomenclature, Scales scale)
{
    if (nomenclature.size() < 1)
    {
        WidgetMap errorMap;
        errorMap.Name = "?";
        return errorMap;
    }

    const string delimiter = "-";
    auto letters = split(nomenclature, delimiter);
    Point point;
    switch (scale)
    {
    case M1_2000:
        point = GetTwoThousandMap(letters);
        break;
    case M1_5000:
        point = GetFiveThousandMap(letters);
        break;
    case M1_10_000:
        point = GetTenThousandMap(letters);
        break;
    case M1_25_000:
        point = GetTwentyFiveThousandMap(letters);
        break;
    case M1_50_000:
        point = GetFiftyThousandMap(letters);
        break;
    case M1_100_000:
        point = GetOneHundredThousandMap(letters);
        break;
    case M1_200_000:
        point = GetTwoHundredThousandMap(letters);
        break;
    case M1_500_000:
        point = GetFiveHundredThousandMap(letters);
        break;
    case M1_1_000_000:
        point = GetOneMillionMap(letters);
        break;
    default:
        break;
    }

    return WidgetMap::GetNomenclature(point, scale);
}
