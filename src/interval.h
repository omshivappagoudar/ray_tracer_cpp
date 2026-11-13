#ifndef INTERVAL_H
#define INTERVAL_H

#include "general.h"


class interval {
    public:
        double min;
        double max;

        interval() : min(+infinity), max(-infinity) {} // Default constructor is an empty interval
        interval(double min, double max) : min(min), max(max) {}

        double size() const {
            return max - min;
        }   

        bool contains(double value) const {
            return (value >= min && value <= max);
        }

        bool surrounds(double x) const {
            return (min < x && max > x);
        }

        static const interval empty;
        static const interval universe;

        double clamp(double x) const {
            if (x < min) { return min; };
            if (x > max) { return max; };
            return x;
        }
};

const interval interval::empty = interval(+infinity, -infinity);
const interval interval::universe = interval(-infinity, +infinity);

#endif