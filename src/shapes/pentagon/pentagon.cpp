#include "pentagon.hpp"
#include <cmath>

Pentagon::Pentagon(double side) : side(side) {}

double Pentagon::area() {
    return (sqrt(5 * (5 + 2 * sqrt(5))) * pow(side, 2)) / 4;
}

double Pentagon::perimeter() {
    return 5 * side;
}