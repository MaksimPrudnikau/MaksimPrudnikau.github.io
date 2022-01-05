//
// Created by user on 22.12.2021.
//

#include "TwoHundredThousandMap.h"
#include <string>
#include <vector>
std::string intToRoman(int num) {
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
    return "-" + intToRoman(dx * MatrixSize - (MatrixSize - dy));
}
