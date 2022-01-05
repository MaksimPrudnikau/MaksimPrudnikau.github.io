//
// Created by user on 21.12.2021.
//

#ifndef MAPS_ONEMILLIONMAP_H
#define MAPS_ONEMILLIONMAP_H

#include "../Map.h"

struct OneMillionMap : public Map
{
    Point GetShift(std::vector<std::string>);

protected:
    const Angle lengthByLatitude = {4, 0, 0};
    const Angle lengthByLongitude = {6, 0, 0};
    Angle getLengthByLatitude() override {return lengthByLatitude;}
    Angle getLengthByLongitude() override {return lengthByLongitude;};

    std::string GetNomenclature(Point point, Border borders) override;
};


#endif //MAPS_ONEMILLIONMAP_H
