#include "square.hpp"

Square::Square(double side) : side(side) {}

double Square::area() {
    return side * side;
}

double Square::perimeter() {
    return 4 * side;
}