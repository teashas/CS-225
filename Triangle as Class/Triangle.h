#pragma once
#include "Point.h"
class Triangle
{
	Point p1;
	Point p2;
	Point p3;
public:
	void enter();
	void print();
	Point getCentroid();
	double getPerimeter();
};

