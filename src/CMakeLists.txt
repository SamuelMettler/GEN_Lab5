set(core_SRCS Customer.cpp Customer.h MovieNewRelease.h MovieChildrens.h MovieRegular.h main.cpp Movie.h Rental.h)

add_library(core ${core_SRCS})
add_executable(exe main.cpp)
target_link_libraries(exe core)
