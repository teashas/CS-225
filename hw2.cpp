#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Triangle.h"
using namespace std;


Point getPointFromUser();
double distanceBetweenPoints(const Point *p1, const Point *p2);
void printPoint(Point pt);
Triangle getTriangleFromUser();
void printVertices(const Triangle *tr);
Point getCentroid(const Triangle *tr);
double getPerimeter(const Triangle *tr);

int main() {
	Triangle tr;
	Point getCent;
	double perimeter = 0.0;

	tr = getTriangleFromUser();	
	printVertices(&tr);
	getCent = getCentroid(&tr);
	cout << "The centroid is "
		 << " [" << getCent.x
		 << ", " << getCent.y << "]" << endl;
	perimeter = getPerimeter(&tr);
	cout << "The perimeter is " << perimeter << endl;

	return EXIT_SUCCESS;
}

Point getPointFromUser() {
	Point userInput;

	cout << "Enter the x and y coordinates separated by a space: " << endl;
	cin >> userInput.x >> userInput.y;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(999, '\n');
		cout << "Try again" << endl;
		cout << "Enter the x and y coordinates separated by a space: " << endl;
		cin >> userInput.x >> userInput.y;
	}
	return userInput;
}

double distanceBetweenPoints(const Point *p1, const Point *p2) {
	double distance = 0.0;
	distance = sqrt(((p2->x - p1->x) * (p2->x - p1->x)) + ((p2->y - p1->y) * (p2->y - p1->y)));
	return distance;
}

void printPoint(Point pt) {
	cout << "[" << pt.x << ", " << pt.y << "] ";
}

void printVertices(const Triangle *tr) {
	cout << "The triangle vertices are ";
	printPoint(tr->p1);
	printPoint(tr->p2);
	printPoint(tr->p3);
}

Point getCentroid(const Triangle *tr) {
	Point getCent;
	getCent.x = (tr->p1.x + tr->p2.x + tr->p3.x) / 3.0;
	getCent.y = (tr->p1.y + tr->p2.y + tr->p3.y) / 3.0;

	return getCent;
}

Triangle getTriangleFromUser() {
	Triangle tr;
	tr.p1 = getPointFromUser();
	tr.p2 = getPointFromUser();
	tr.p3 = getPointFromUser();

	return tr;
}

double getPerimeter(const Triangle *tr) {
	int i = 0;
	double sideOne = 0.0;
	double sideTwo = 0.0;
	double sideThree = 0.0;
	double perimeter = 0.0;

	sideOne = distanceBetweenPoints(&tr->p1, &tr->p2);
	sideTwo = distanceBetweenPoints(&tr->p2, &tr->p3);
	sideThree = distanceBetweenPoints(&tr->p3, &tr->p1);
	perimeter = sideOne + sideTwo + sideThree;

	return perimeter;
}