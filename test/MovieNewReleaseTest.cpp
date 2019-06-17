//
// Created by mbonjour on 6/16/19.
//

#include <gtest/gtest.h>
#include <iostream>
#include "../src/Customer.h"
#include "../src/MovieChildrens.h"
#include "../src/MovieNewRelease.h"
#include "../src/MovieRegular.h"

TEST(movie_new_release_test, movie_new_release_test_price) {
    MovieNewRelease mov("Tests unitaires : le retour");
    for(int i = 0; i < 10; ++i) {
        ASSERT_EQ(i*3, mov.getPrice(i));
    }
}