//
// Created by mbonjour on 6/16/19.
//


#ifndef GEN_LAB5_MOCKMOVIE_H
#define GEN_LAB5_MOCKMOVIE_H

#include "gmock/gmock.h"

class MockMovieNewRelease : public MovieNewRelease {
public :
    explicit MockMovieNewRelease(std::string title) : MovieNewRelease(std::move(title)) {}
    MOCK_METHOD1(getPrice, double(int daysRented));
};

#endif //GEN_LAB5_MOCKMOVIE_H
