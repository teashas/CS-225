#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Triangle.h"
using std::cin;
using std::cout;
using std::endl;

int main() {
	Triangle tr;
	Point getCent;
	double perimeter = 0.0;
	
	tr.enter();
	tr.print();
	getCent = tr.getCentroid();
	cout << "The centroid is ";
	getCent.print();
	cout << endl;
	perimeter = tr.getPerimeter();
	cout << "The perimeter is " << perimeter << endl;
	cout << endl;

	return EXIT_SUCCESS;
}