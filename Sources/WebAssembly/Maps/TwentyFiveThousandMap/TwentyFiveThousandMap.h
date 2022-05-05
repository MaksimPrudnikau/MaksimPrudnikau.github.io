//
// Created by maksim on 12/26/21.
//

#ifndef MAPS_TWENTYFIVETHOUSANDMAP_H
#define MAPS_TWENTYFIVETHOUSANDMAP_H

#include "../Map.h"

struct TwentyFiveThousandMap : public Map
{
    TwentyFiveThousandMap() = default;
    explicit TwentyFiveThousandMap (WidgetMap previous) {
        TwentyFiveThousandMap::previous = std::move(previous);
    }
    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 5, 0};
    const Angle lengthByLongitude = {0, 7, 30};
    const int MatrixSize = 2;
    const int correctAnswers = 4;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_TWENTYFIVETHOUSANDMAP_H
