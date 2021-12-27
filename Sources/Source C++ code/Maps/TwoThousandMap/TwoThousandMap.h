//
// Created by maksim on 12/27/21.
//

#ifndef MAPS_TWOTHOUSANDMAP_H
#define MAPS_TWOTHOUSANDMAP_H

#include "../Map.h"

struct TwoThousandMap : public Map
{
    TwoThousandMap() = default;
    explicit TwoThousandMap (WidgetMap previous) {
        TwoThousandMap::previous = std::move(previous);
    }
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 1, 15};
    const Angle lengthByLongitude = {0, 1, 52.5};
    const unsigned int MatrixSize = 256;
    const unsigned int RowLength = 16;
    const unsigned int correctAnswers = 4;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_TWOTHOUSANDMAP_H
