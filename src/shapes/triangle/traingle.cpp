#include "traingle.hpp"
#include <cmath>

Triangle::Triangle(double side) : side(side) {}

double Triangle::area() {
    return (sqrt(3) * pow(side, 2)) / 4;
}

double Triangle::perimeter() {
    return 3 * side;
}