#include <gtest/gtest.h>
#include <iostream>
#include "../src/Customer.h"
#include "../src/MovieChildrens.h"
#include "../src/MovieNewRelease.h"
#include "../src/MovieRegular.h"

TEST(customer_test, customer_test_name_Test) {
    Customer *customer = new Customer("Samouel");
    ASSERT_EQ(customer->getName(), "Samouel");
}

TEST(customer_test, customer_test_rental_Test) {
    Customer *customer = new Customer("Samouel");
    customer->addRental( Rental( new MovieRegular("Karate Kid"), 7));
    customer->addRental( Rental( new MovieNewRelease( "Avengers: Endgame"), 5));
    customer->addRental( Rental( new MovieChildrens("Snow White"), 3 ));

    ASSERT_EQ("Rental Record for Samouel\n"
              "\tKarate Kid\t9.5\n"
              "\tAvengers: Endgame\t15\n"
              "\tSnow White\t1.5\n"
              "Amount owed is 26\n"
              "You earned 4 frequent renter points", customer->statement());
}