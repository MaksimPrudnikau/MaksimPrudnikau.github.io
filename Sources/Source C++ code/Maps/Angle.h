//
// Created by user on 21.12.2021.
//

#ifndef MAPS_ANGLE_H
#define MAPS_ANGLE_H

#include <cmath>
struct Angle
{
    unsigned short degrees = 0;
    unsigned short minutes = 0;
    double seconds = 0;

    Angle() = default;

    Angle (unsigned short degrees, unsigned short minutes, double seconds)
    {
        this->degrees = degrees;
        this->minutes = minutes;
        this->seconds = seconds;
    }

    double ToGrad() const
    {
        return degrees + minutes / 60.0 + seconds / 3600.0;
    }

    static Angle ToAngle(double grad)
    {
        int degree = floor(grad);
        int minute = floor((grad - degree) * 60);
        double second = grad - degree - Angle(0, minute, 0).ToGrad();
        return {(unsigned short)degree, (unsigned short)minute, second};
    }

    Angle operator + (Angle second) const
    {
         unsigned short _degrees = this->degrees + second.degrees;
         unsigned short _minutes = this->minutes + second.minutes;
         double _seconds = this->seconds + second.seconds;

         if (_seconds >= 60)
         {
             _minutes += 1;
             _seconds -= 60;
         }

         if (_minutes >= 60)
         {
             _degrees += 1;
             _minutes -= 60;
         }

         if (_degrees >= 360)
         {
             _degrees -= 360;
         }

         return {_degrees, _minutes, _seconds};
    }

    Angle operator - (Angle second) const
    {
        int _degrees = std::abs(degrees - second.degrees);
        int _minutes = std::abs(minutes - second.minutes);
        double _seconds = std::abs(seconds - second.seconds);
        return {
                (unsigned short) _degrees,
                (unsigned short) _minutes,
                _seconds
        };
    }

    Angle operator -= (Angle second) const {
        return *this - second;
    }
};

#endif //MAPS_ANGLE_H