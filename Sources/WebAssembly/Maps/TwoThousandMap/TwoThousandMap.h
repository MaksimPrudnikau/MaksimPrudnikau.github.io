//
// Created by maksim on 12/27/21.
//

#ifndef MAPS_TWOTHOUSANDMAP_H
#define MAPS_TWOTHOUSANDMAP_H

#include "../Map.h"

struct TwoThousandMap : public Map
{
    TwoThousandMap() = default;
    explicit TwoThousandMap (WidgetMap& previous) {
        previous.Name.erase(previous.Name.length() - 1);
        this->previous = previous;
    }
    Point GetShift(std::string);
protected:
    WidgetMap previous;
    const Angle lengthByLatitude = {0, 0, 25};
    const Angle lengthByLongitude = {0, 0, 37.5};
    const unsigned int MatrixSize = 9;
    const unsigned int rowLength = 3;
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_TWOTHOUSANDMAP_H
