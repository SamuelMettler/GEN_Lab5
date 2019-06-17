//
// Created by mbonjour on 6/16/19.
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>

#include "../src/Customer.h"
#include "../src/MovieChildrens.h"
#include "../src/MovieNewRelease.h"
#include "../src/MovieRegular.h"
#include "MockMovie.h"

using ::testing::AtLeast;
using ::testing::Return;

TEST(rental_test, rental_test_points){
    Rental rent1(new MovieNewRelease("test"), 3);
    Rental rent2(new MovieRegular ("test2"), 5);

    ASSERT_EQ(2 ,rent1.addFrequentRenterPoints());
    ASSERT_EQ(1 ,rent2.addFrequentRenterPoints());
}

TEST(rental_test, rental_test_amount) {
    // Use of Mock for Unit testing
    MockMovieNewRelease *mov = new MockMovieNewRelease("Test movie");
    Rental rent( mov, 5);

    EXPECT_CALL(*mov, getPrice(5)).Times(AtLeast(1)).WillRepeatedly(Return(15));

    ASSERT_EQ(15, rent.getAmount());
    delete mov;
}