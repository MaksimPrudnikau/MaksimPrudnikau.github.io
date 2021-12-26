//
// Created by user on 21.12.2021.
//

#ifndef MAPS_ANGLE_H
#define MAPS_ANGLE_H

#include <string>
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

    void operator += (Angle second)
    {
        *this = *this + second;
    }

    Angle operator - (Angle second) const
    {
        int _degrees = degrees - second.degrees;
        int _minutes = minutes;
        double _seconds = seconds;
        if (degrees - second.degrees < 0)
        {
            return second - *this;
        }

        if (minutes - second.minutes < 0)
        {
            if (_degrees >= 1)
            {
                _degrees--;
                _minutes = minutes - second.minutes + 60;
            }
            else
            {
                _degrees = -_degrees;
                _minutes = second.minutes - minutes;
            }
        }

        if (seconds - second.seconds < 0)
        {
            if (_minutes >= 1)
            {
                _minutes--;
                _seconds = seconds - second.seconds + 60;
            }
            else
            {
                _minutes = -_minutes;
                _seconds = second.seconds - seconds;
            }
        }
        _degrees = std::abs(_degrees);
        _minutes = std::abs(_minutes);
        _seconds = std::abs(_seconds);

        return Angle((unsigned short)_degrees, (unsigned short)_minutes, _seconds) + Angle(0, 0, 0);
    }

    Angle operator -= (Angle second) const {
        return *this - second;
    }

    bool operator == (Angle second) const
    {
        return
            degrees == second.degrees &&
            minutes == second.minutes &&
            seconds == second.seconds;
    }

    bool operator < (Angle second) const
    {
        if (degrees < second.degrees)
        {
            return true;
        }
        else if (degrees == second.degrees)
        {
            if (minutes < second.minutes)
            {
                return true;
            }
            else if (minutes == second.minutes)
            {
                if (seconds < second.seconds)
                {
                    return true;
                }
            }
        }

        return false;
    }
};

#endif //MAPS_ANGLE_H