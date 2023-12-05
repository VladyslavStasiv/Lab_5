#include "RightTriangle.h"

RightTriangle::RightTriangle(double a, double b) :Triangle(a, b, 90) {}

double RightTriangle::area()
{
    return 0.5 * a * b;
}
