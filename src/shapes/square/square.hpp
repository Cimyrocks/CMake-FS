#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "shapes/shape.hpp"

class Square : public Shape {
public:
    Square(double side);
    double area();
    double perimeter();
private:
    double side;
};

#endif