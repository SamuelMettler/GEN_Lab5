//
// Created by mbonjour on 6/16/19.
//

#ifndef GEN_LAB5_MOVIECHILDRENS_H
#define GEN_LAB5_MOVIECHILDRENS_H

#include "Movie.h"

class MovieChildrens: public Movie {
public:
    explicit MovieChildrens(std::string title) : Movie(std::move(title), 2) {}
    double getPrice(int daysRented) {
        double thisAmount = 0;
        thisAmount += 1.5;
        if (daysRented > 3)
            thisAmount += (daysRented - 3) * 1.5;
        return thisAmount;
    }
};
#endif //GEN_LAB5_MOVIECHILDRENS_H
