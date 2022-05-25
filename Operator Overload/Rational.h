#include <iostream>
#pragma once;

class Rational {

	int numerator;
	int denominator;
	void normalize();
public:
	Rational();
	Rational(int num, int den);
	operator double()const;
	friend std::ostream& operator<<(std::ostream& os, const Rational& rhs) ;
	Rational operator*(const Rational& rhs) const;
	Rational operator/(const Rational& rhs) const;
	Rational operator+(const Rational& rhs) const;
	Rational operator-(const Rational& rhs) const;
};