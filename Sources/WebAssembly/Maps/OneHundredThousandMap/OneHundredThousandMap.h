//
// Created by maksim on 12/26/21.
//

#ifndef MAPS_ONEHUNDREDTHOUSANDMAP_H
#define MAPS_ONEHUNDREDTHOUSANDMAP_H

#include "../Map.h"

struct OneHundredThousandMap : public Map
{
    OneHundredThousandMap() = default;
    explicit OneHundredThousandMap (WidgetMap previous) {
        OneHundredThousandMap::previous = std::move(previous);
    }
    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 20, 0};
    const Angle lengthByLongitude = {0, 30, 0};
    const unsigned int rowLength = 12;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_ONEHUNDREDTHOUSANDMAP_H
