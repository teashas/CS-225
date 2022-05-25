#include <iostream>
#include <iomanip>
#include "Point.h"
using namespace std;

void Point::enter()
{
	

	cout << "Enter the x and y coordinates separated by a space: " << endl;
	cin >> x >> y;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Try again" << endl;
		cout << "Enter the x and y coordinates separated by a space: " << endl;
		cin >> x >> y;
	}
}

void Point::print()
{
	cout << " [" << x << ", " << y << "] ";
}

double Point::getDistanceTo(Point that)
{
	double distance = 0.0;
	distance = sqrt(((that.x - x) * (that.x - x)) + ((that.y - y) * (that.y - y)));
	return distance;
}

double Point::getDistanceTo(Point * that)
{
	double distance = 0.0;
	distance = sqrt(((that->x - x) * (that->x - x)) + ((that->y - y) * (that->y - y)));
	return distance;
}
