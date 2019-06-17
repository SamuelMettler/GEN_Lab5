#include <utility>

//
// Created by mbonjour on 6/16/19.
//

#ifndef GEN_LAB5_MOVIEREGULAR_H
#define GEN_LAB5_MOVIEREGULAR_H

#include "Movie.h"

class MovieRegular: public Movie {
public:
    explicit MovieRegular(std::string title) : Movie(std::move(title), 0) {}
    double getPrice(int daysRented) {
        double thisAmount = 0;
        thisAmount += 2;
        if (daysRented > 2)
            thisAmount += (daysRented - 2) * 1.5;
        return thisAmount;
    }
};

#endif //GEN_LAB5_MOVIEREGULAR_H
