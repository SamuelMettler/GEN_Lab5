// Rental.h
#ifndef RENTAL_H
#define RENTAL_H

#include <sstream>
#include "Movie.h"

class Rental {
public:
    Rental( const Movie& movie, int daysRented );

    int getDaysRented() const;
    const Movie& getMovie() const;
    double getAmount();
    std::string toString();
    int addFrequentRenterPoints();

private:
    Movie _movie;
    int _daysRented;
};

inline Rental::
Rental( const Movie& movie, int daysRented )
        : _movie( movie )
        , _daysRented( daysRented ) {}

inline int Rental::
getDaysRented() const { return _daysRented; }

inline const Movie& Rental::
getMovie() const { return _movie; }

inline double Rental::
getAmount() {
    double thisAmount = 0;
    // determine amounts for each line
    switch ( this->getMovie().getPriceCode() ) {
        case Movie::REGULAR:
            thisAmount += 2;
            if (this->getDaysRented() > 2)
                thisAmount += (this->getDaysRented() - 2) * 1.5;
            break;
        case Movie::NEW_RELEASE:
            thisAmount += this->getDaysRented() * 3;
            break;
        case Movie::CHILDRENS:
            thisAmount += 1.5;
            if (this->getDaysRented() > 3)
                thisAmount += (this->getDaysRented() - 3) * 1.5;
            break;
    }
    return thisAmount;
}
inline std::string Rental::
toString() {
    std::ostringstream result;
    result << "\t" << this->getMovie().getTitle() << "\t" << this->getAmount() << "\n";
    return result.str();
}

inline int Rental::
addFrequentRenterPoints() {
    // add frequent renter points
    int frequentRenterPoints = 1;
    // add bonus for a two day new release rental
    if ( ( this->getMovie().getPriceCode() == Movie::NEW_RELEASE )
         && this->getDaysRented() > 1 ) frequentRenterPoints++;

    return frequentRenterPoints;
}

#endif // RENTAL_H