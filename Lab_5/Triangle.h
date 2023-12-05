#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <Windows.h>

class Triangle
{
protected:
	double a, b, angle;
public:
	Triangle(double a, double b, double angle);
	virtual double area() = 0;
};