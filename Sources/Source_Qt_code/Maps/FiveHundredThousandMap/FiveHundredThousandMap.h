//
// Created by user on 22.12.2021.
//

#ifndef MAPS_FIVEHUNDREDTHOUSANDMAP_H
#define MAPS_FIVEHUNDREDTHOUSANDMAP_H
#include "../Map.h"

struct FiveHundredThousandMap : public Map
{
    FiveHundredThousandMap() = default;
    explicit FiveHundredThousandMap (WidgetMap previous) {
        FiveHundredThousandMap::previous = std::move(previous);
    }

    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {2, 0, 0};
    const Angle lengthByLongitude = {3, 0, 0};
    const unsigned int rowLength = 4;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};
    
    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_FIVEHUNDREDTHOUSANDMAP_H
