#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(double a) :Triangle(a, a, 60) {}

double EquilateralTriangle::area()
{
	return (sqrt(3) * a * b) / 4;
}
