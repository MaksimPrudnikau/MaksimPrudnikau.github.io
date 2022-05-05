//
// Created by maksim on 12/27/21.
//

#ifndef MAPS_FIVETHOUSANDMAP_H
#define MAPS_FIVETHOUSANDMAP_H

#include "../Map.h"

struct FiveThousandMap : public Map
{
    FiveThousandMap() = default;
    explicit FiveThousandMap (WidgetMap previous) {
        FiveThousandMap::previous = std::move(previous);
    }
    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 1, 15};
    const Angle lengthByLongitude = {0, 1, 52.5};
    const unsigned int MatrixSize = 256;
    const unsigned int rowLength = 16;
    const unsigned int correctAnswers = 4;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_FIVETHOUSANDMAP_H
