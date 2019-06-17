//
// Created by mbonjour on 6/16/19.
//
#include <gtest/gtest.h>
#include <iostream>
#include "../src/Customer.h"
#include "../src/MovieChildrens.h"
#include "../src/MovieNewRelease.h"
#include "../src/MovieRegular.h"

TEST(movie_childrens_test, movie_childrens_test_price) {
    MovieChildrens mov("the movie of the Year");
    // We check that until 3 te value stay 1.5
    for(int i = 0; i <= 3; ++i) {
        ASSERT_EQ(1.5, mov.getPrice(i));
    }
    // Some tests
    ASSERT_EQ(4.5, mov.getPrice(5));

}
