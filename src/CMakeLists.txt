set(core_SRCS Customer.cpp Customer.h main.cpp Movie.cpp Movie.h Rental.h)

add_library(core ${core_SRCS})
add_executable(exe main.cpp)
target_link_libraries(exe core)
