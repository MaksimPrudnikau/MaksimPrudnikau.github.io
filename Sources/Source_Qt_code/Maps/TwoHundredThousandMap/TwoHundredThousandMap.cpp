//
// Created by user on 22.12.2021.
//

#include "TwoHundredThousandMap.h"
#include <string>
#include <vector>
const std::string intToRoman(int num) {
    std::vector<std::pair<int, std::string>> romans(
    {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    });
    std::string roman;
    while (num > 0) {
        for (auto &[v, r]: romans) {
            if (num >= v) {
                num -= v;
                roman += r;
                break;
            }
        }
    }
    return roman;
}

std::string TwoHundredThousandMap::GetNomenclature(Point point, Border borders)
{
    int dx = floor((borders.leftDown.Latitude - previous.borders.leftUp.Latitude).ToGrad() / lengthByLatitude.ToGrad());
    int dy = floor((borders.rightDown.Longitude - previous.borders.leftDown.Longitude).ToGrad() / lengthByLongitude.ToGrad());
    return "-" + intToRoman(dx * rowLength - (rowLength - dy));
}

const int roman_to_integer(std::string roman) 
{
    int n = int(roman.length());
    if (0 == n) {
        return 0;
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        switch (roman[i]) {
        case 'I':
            result += 1;
            break;
        case 'V':
            result += 5;
            break;
        case 'X':
            result += 10;
            break;
        case 'L':
            result += 50;
            break;
        case 'C':
            result += 100;
            break;
        case 'D':
            result += 500;
            break;
        case 'M':
            result += 1000;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        if ((roman[i] == 'V' || roman[i] == 'X') && roman[i - 1] == 'I') {
            result -= 1 + 1;
        }

        if ((roman[i] == 'L' || roman[i] == 'C') && roman[i - 1] == 'X') {
            result -= 10 + 10;
        }

        if ((roman[i] == 'D' || roman[i] == 'M') && roman[i - 1] == 'C') {
            result -= 100 + 100;
        }
    }

    return result;
}

Point TwoHundredThousandMap::GetShift(std::string numbers)
{
    Point point;
    int number = roman_to_integer(numbers);
    int counter = 1;
    for (int i = 0; i < rowLength - 1; ++i)
      {
        point.Latitude += lengthByLatitude;
      }

    Angle diffFromLeft;
    for (int i = 0; i < rowLength; i++)
    {
        diffFromLeft = Angle(0, 0, 0);
        for (int j = 0; j < rowLength; j++, ++counter)
        {
            if (counter == number) break;
            diffFromLeft += lengthByLongitude;
        }

        if (counter == number) break;
        point.Latitude = point.Latitude - lengthByLatitude;
    }

    point.Longitude += diffFromLeft;
    return point;
}
