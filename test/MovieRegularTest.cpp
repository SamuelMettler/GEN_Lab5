//
// Created by mbonjour on 6/16/19.
//

#include <gtest/gtest.h>
#include <iostream>
#include "../src/Customer.h"
#include "../src/MovieChildrens.h"
#include "../src/MovieNewRelease.h"
#include "../src/MovieRegular.h"

TEST(movie_regular_test, movie_regular_test_price) {
    MovieRegular mov("not another bestseller");
    for(int i = 0; i < 3; ++i){
        ASSERT_EQ(2, mov.getPrice(i));
    }
    ASSERT_EQ(6.5, mov.getPrice(5));
}
