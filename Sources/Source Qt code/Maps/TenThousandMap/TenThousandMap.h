//
// Created by maksim on 12/27/21.
//

#ifndef MAPS_TENTHOUSANDMAP_H
#define MAPS_TENTHOUSANDMAP_H

#include "../Map.h"

struct TenThousandMap : public Map
{
    TenThousandMap() = default;
    explicit TenThousandMap (WidgetMap previous) {
        TenThousandMap::previous = std::move(previous);
    }
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 2, 30};
    const Angle lengthByLongitude = {0, 3, 45};
    const int MatrixSize = 2;
    const int correctAnswers = 4;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_TENTHOUSANDMAP_H
