#include <iostream>

#include "Customer.h"
#include "MovieRegular.h"
#include "MovieNewRelease.h"
#include "MovieChildrens.h"

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( new MovieRegular("Karate Kid"), 7));
    customer.addRental( Rental( new MovieNewRelease( "Avengers: Endgame"), 5));
    customer.addRental( Rental( new MovieChildrens("Snow White"), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}