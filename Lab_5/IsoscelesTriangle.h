#pragma once
#include "Triangle.h"

class IsoscelesTriangle :public Triangle
{
public:
	IsoscelesTriangle(double a, double b, double angle);
	double area() override;
};

