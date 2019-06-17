// Rental.h
#ifndef RENTAL_H
#define RENTAL_H

#include <sstream>
#include "Movie.h"

class Rental {
public:
    Rental( Movie *movie, int daysRented );

    int getDaysRented() const;
    double getAmount();
    std::string toString();
    int addFrequentRenterPoints();

private:
    Movie *_movie;
    int _daysRented;
};

inline Rental::
Rental( Movie *movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

inline int Rental::
getDaysRented() const { return _daysRented; }


inline double Rental::
getAmount() {
    double thisAmount = 0;
    // determine amounts for each line

    thisAmount += this->_movie->getPrice(this->getDaysRented());
    return thisAmount;
}

inline std::string Rental::
toString() {
    std::ostringstream result;
    result << "\t" << this->_movie->getTitle() << "\t" << this->getAmount() << "\n";
    return result.str();
}

inline int Rental::
addFrequentRenterPoints() {
    // add frequent renter points
    int frequentRenterPoints = 1;
    // add bonus for a two day new release rental
    if ( ( this->_movie->getPriceCode() == Movie::NEW_RELEASE )
         && this->getDaysRented() > 1 ) frequentRenterPoints++;

    return frequentRenterPoints;
}

#endif // RENTAL_H