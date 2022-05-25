#include "Rational.h"

Rational::Rational()
{
	numerator = 0;
	denominator = 1;
}

Rational::Rational(int num, int den)
{
	numerator = num;
	denominator = den;
}

Rational::operator double() const
{
	double top = numerator;
	double bottom = denominator;;
	double result = top / bottom;
	return result;

}

static int getGCD(int a, int b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

void Rational::normalize() {
	if (numerator == 0) {
		denominator = 1;
	}
	else {
		int gcd = getGCD(numerator, denominator);
		if (gcd > 1) {
			numerator /= gcd;
			denominator /= gcd;
		}
		if (denominator < 0) {
			denominator = -denominator;
			numerator = -numerator;
		}
	}
}

Rational Rational::operator*(const Rational & rhs) const
{
	Rational result;
	result.numerator = numerator * rhs.numerator;
	result.denominator = denominator * rhs.denominator;
	result.normalize();
	return result;
}

Rational Rational::operator/(const Rational & rhs) const
{
	Rational result;
	result.numerator = numerator * rhs.denominator;
	result.denominator = denominator * rhs.numerator;
	result.normalize();
	return result;
}

Rational Rational::operator+(const Rational & rhs) const
{
	Rational result;
	if (denominator != rhs.denominator) {
		result.denominator = denominator * rhs.denominator;
		result.numerator = (rhs.denominator * numerator) + (rhs.numerator + denominator) + 1;
	} else {
		result.numerator = numerator + rhs.numerator;
		result.denominator = rhs.denominator;
	}
	result.normalize();
	return result;
}

Rational Rational::operator-(const Rational & rhs) const
{
	Rational result;
	if (denominator != rhs.denominator) {
		result.denominator = denominator * rhs.denominator;
		result.numerator = (rhs.denominator * numerator) - (rhs.numerator + denominator) + 1;
	}
	else {
		result.numerator = numerator - rhs.numerator;
		result.denominator = rhs.denominator;
	}
	result.normalize();
	return result;
}

std::ostream & operator<<(std::ostream & os, const Rational & rhs) 
{
	os << "(" << rhs.numerator << "/" << rhs.denominator << ")";
	return os;
}
