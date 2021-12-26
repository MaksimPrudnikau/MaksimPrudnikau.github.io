//
// Created by user on 22.12.2021.
//

#ifndef MAPS_TWOHUNDREDTHOUSANDMAP_H
#define MAPS_TWOHUNDREDTHOUSANDMAP_H

#include "../Map.h"
#include <utility>
#include "../OneMillionMap/OneMillionMap.h"

struct TwoHundredThousandMap : public Map
{
    TwoHundredThousandMap() = default;
    explicit TwoHundredThousandMap (WidgetMap previous) {
        TwoHundredThousandMap::previous = std::move(previous);
    }
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 40, 0};
    const Angle lengthByLongitude = {1, 0, 0};
    const int MatrixSize = 6;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_TWOHUNDREDTHOUSANDMAP_H
