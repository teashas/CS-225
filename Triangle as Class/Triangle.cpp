#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "Point.h"
using namespace std;

void Triangle::enter()
{
	p1.enter();
	p2.enter();
	p3.enter();
}

void Triangle::print()
{
	cout << "The triangle vertices are ";
	p1.print();
	p2.print();
	p3.print();
	cout << endl;
}

Point Triangle::getCentroid()
{
	Point getCent;
	getCent.setX((p1.getX() + p2.getX() + p3.getX()) / 3.0);
	getCent.setY((p1.getY() + p2.getY() + p3.getY()) / 3.0);
	
	return getCent;
	
}

double Triangle::getPerimeter()
{
	int i = 0;
	double sideOne = 0.0;
	double sideTwo = 0.0;
	double sideThree = 0.0;
	double perimeter = 0.0;

	sideOne = p1.getDistanceTo(&p2);
	sideTwo = p2.getDistanceTo(&p3);
	sideThree = p3.getDistanceTo(&p1);
	perimeter = sideOne + sideTwo + sideThree;

	return perimeter;
}
