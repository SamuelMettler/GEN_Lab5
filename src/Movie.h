#include <utility>

// Movie.h
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
public:

    // ADD WHEN A NEW PRICE CODE IS CREATED
    static const int REGULAR = 0;
    static const int CHILDRENS = 2;
    static const int NEW_RELEASE = 1;

    std::string getTitle() const;
    int getPriceCode();
    virtual double getPrice(int daysRented) = 0;

private:
    std::string _title;
    int _price_code;

protected:
    Movie(std::string title, int priceCode);
};

inline Movie::
Movie( std::string  title, int priceCode )
        : _title(std::move( title )), _price_code(priceCode)
{}

inline std::string Movie::
getTitle() const { return _title; }


inline int Movie::getPriceCode() {
    return _price_code;
}

#endif // MOVIE_H