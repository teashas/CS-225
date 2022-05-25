#include "Assert.h"

void Assert::isTrue(bool actual) {
	if (actual)
		cout << "OK" << endl;
	else
		cout << "FAIL" << endl;
}

void Assert::isFalse(bool actual) {
	 isTrue(!actual); 
}

void Assert::equals(int expected, int actual) {
	isTrue(expected == actual); 
}

void Assert::equals(string expected, string actual) {
	isTrue(expected.compare(actual) == 0);
}

template <typename T>
void Assert::equals(const T& expected, const T& actual) {
	isTrue(expected == actual);
}
