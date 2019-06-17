//
// Created by mbonjour on 6/16/19.
//

#ifndef GEN_LAB5_MOVIENEWRELEASE_H
#define GEN_LAB5_MOVIENEWRELEASE_H

#include "Movie.h"

class MovieNewRelease: public Movie {
public:
    explicit MovieNewRelease(std::string title) : Movie(std::move(title), 1) {}
    double getPrice(int daysRented) {
        double thisAmount = 0;
        thisAmount += daysRented * 3;
        return thisAmount;
    }
};

#endif //GEN_LAB5_MOVIENEWRELEASE_H
