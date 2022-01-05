//
// Created by maksim on 12/26/21.
//

#ifndef MAPS_FIFTYTHOUSANDMAP_H
#define MAPS_FIFTYTHOUSANDMAP_H

#include "../Map.h"
#include <string>

struct FiftyThousandMap : public Map
{
    FiftyThousandMap() = default;
    explicit FiftyThousandMap (WidgetMap previous) {
        FiftyThousandMap::previous = std::move(previous);
    }
    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 10, 0};
    const Angle lengthByLongitude = {0, 15, 0};
    const int correctAnswers = 4;
    const int rowLength = 2;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_FIFTYTHOUSANDMAP_H
