#pragma once
using namespace std;

class Point {
	double x;
	double y;
public:
	double getX() { return x; };
	double getY() { return y; };
	void setX(double setter) { x = setter; };
	void setY(double setter) { y = setter; };
	void enter();
	void print();
	double getDistanceTo(Point that);
	double getDistanceTo(Point *that);
};
