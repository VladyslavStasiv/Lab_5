#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double angle) :Triangle(a, b, angle) {}

double IsoscelesTriangle::area()
{
	return a * b * sin(angle * M_PI / 180);
}
