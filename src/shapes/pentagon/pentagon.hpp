#ifndef PENTAGON_HPP
#define PENTAGON_HPP

#include "shapes/shape.hpp"

class Pentagon : public Shape {
public:
    Pentagon(double side);
    double area();
    double perimeter();
private:
    double side;
};

#endif
