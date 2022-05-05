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
#include <regex>
#include <string>
#include <stdexcept>
#include <QString>
#include <QRegularExpression>

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

const Point GetOneMillionMap(vector<string>& letters)
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

const Point GetFiveHundredThousandMap(vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    auto map = FiveHundredThousandMap();
    point += map.GetShift(letters.at(2));
    return point;
}

const Point GetTwoHundredThousandMap(vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    point += TwoHundredThousandMap().GetShift(letters.at(2));
    return point;
}

const Point GetOneHundredThousandMap(vector<string>& letters)
{
    Point point = GetOneMillionMap(letters);
    point += OneHundredThousandMap().GetShift(letters.at(2));

    return point;
}

const Point GetFiftyThousandMap(vector<string>& letters)
{
    Point point = GetOneHundredThousandMap(letters);
    point += FiftyThousandMap().GetShift(letters.at(3));
    return point;
}

const Point GetTwentyFiveThousandMap(vector<string>& letters)
{
    Point point = GetFiftyThousandMap(letters);
    point += TwentyFiveThousandMap().GetShift(letters.at(4));
    return point;
}

const Point GetTenThousandMap(vector<string>& letters)
{
    Point point = GetTwentyFiveThousandMap(letters);
    point += TenThousandMap().GetShift(letters.at(5));
    return point;
}

vector<string> extractIntegerWords(string str)
{
  vector<string> numbers;
    stringstream ss;

    /* Storing the whole string into string stream */
    ss << str;

    /* Running loop till the end of the stream */
    string temp;
    int found;
    while (!ss.eof()) {

        /* extracting word by word from stream */
        ss >> temp;

        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            numbers.push_back(to_string(found));

        /* To save from space at the end of string */
        temp = "";
    }

    return numbers;
}

const Point GetFiveThousandMap(vector<string>& letters)
{
  auto numb = extractIntegerWords(letters.at(2));
  Point point = GetOneHundredThousandMap(letters);
  auto element = letters.at(3);
  element.erase(0, 1);
  element.erase(element.size() - 1, 1);
  point += FiveThousandMap().GetShift(element);
  return point;
}

const Point GetTwoThousandMap(vector<string>& letters)
{
   Point point = GetFiveThousandMap(letters);
   auto element = letters.at(4);
   element.erase(element.size() - 1, 1);
   point += TwoThousandMap().GetShift(element);
   return point;
}

Scales WidgetMap::GetScale(const std::string &nomenclature)
{
    auto oneMillionMapRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}$"), QRegularExpression::UseUnicodePropertiesOption); // 1_000_000
    auto fiveHundredThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-[А-Я]$"), QRegularExpression::UseUnicodePropertiesOption); // 500_000
    auto twoHundredThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-[MDCLXVI]*$"), QRegularExpression::UseUnicodePropertiesOption); // 200_000
    auto oneHundredThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}$"), QRegularExpression::UseUnicodePropertiesOption); // 100_000
    auto fiftyThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}-[А-Я]$"), QRegularExpression::UseUnicodePropertiesOption); // 50_000
    auto twentyFiveThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}-[А-Я]-[а-я]$"), QRegularExpression::UseUnicodePropertiesOption); // 25_000
    auto tenThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}-[А-Я]-[а-я]-[1-5]$"), QRegularExpression::UseUnicodePropertiesOption); // 10_000
    auto fiveThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}\\(\\d{1,3}\\)$"), QRegularExpression::UseUnicodePropertiesOption); // 5_000
    auto twoThousandRegex = QRegularExpression(QString("[A-Z]-\\d{1,2}-\\d{1,2}\\(\\d{1,3}-[а-я]\\)$"), QRegularExpression::UseUnicodePropertiesOption); // 2_000
    const auto input = nomenclature.c_str();

    if (oneMillionMapRegex.match(input).hasMatch())
        return Scales::M1_1_000_000;
    else if (fiveHundredThousandRegex.match(input).hasMatch())
        return Scales::M1_500_000;
    else if (twoHundredThousandRegex.match(input).hasMatch())
        return Scales::M1_200_000;
    else if (oneHundredThousandRegex.match(input).hasMatch())
        return Scales::M1_100_000;
    else if (fiftyThousandRegex.match(input).hasMatch())
        return Scales::M1_50_000;
    else if (twentyFiveThousandRegex.match(input).hasMatch())
        return Scales::M1_25_000;
    else if (tenThousandRegex.match(input).hasMatch())
        return Scales::M1_10_000;
    else if (fiveThousandRegex.match(input).hasMatch())
        return Scales::M1_5000;
    else if (twoThousandRegex.match(input).hasMatch())
        return Scales::M1_2000;
    
    throw runtime_error("Неверный формат введенной номенклатуры!");
}

WidgetMap WidgetMap::GetBorders(const string& nomenclature)
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
    auto scale = GetScale(nomenclature);
    switch (scale)
    {
    case M1_1_000_000:
        point = GetOneMillionMap(letters);
        break;
    case M1_500_000:
        point = GetFiveHundredThousandMap(letters);
        break;
    case M1_200_000:
        point = GetTwoHundredThousandMap(letters);
        break;
    case M1_100_000:
        point = GetOneHundredThousandMap(letters);
        break;
    case M1_50_000:
        point = GetFiftyThousandMap(letters);
        break;
    case M1_25_000:
        point = GetTwentyFiveThousandMap(letters);
        break;
    case M1_10_000:
        point = GetTenThousandMap(letters);
        break;
    case M1_5000:
        point = GetFiveThousandMap(letters);
        break;
    case M1_2000:
        point = GetTwoThousandMap(letters);
        break;
    default:
        break;
    }

    return WidgetMap::GetNomenclature(point, scale);
}
