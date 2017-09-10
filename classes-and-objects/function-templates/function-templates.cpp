// function-templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template <class T>
T addGeneric(T a, T b) {
	return a + b;
}

/* Function Template with Multiple Parameters */
template <class T1, class T2>
T1 smaller(T1 a, T2 b) {
	return(a < b ? a : b);
}

int main() {
	int a = 2, b = 3;
	double c = 3.62, d = 245.9532;
	std::cout << addGeneric(a, b) << std::endl;
	std::cout << addGeneric(c, d) << std::endl;
	//std::cout << addGeneric(a, c) << std::endl; doesn't work, int + double.
	int x = 27;
	double y = 25.14; //the function template of smaller will return the type of class T1, which will be x, which is an integer
	std::cout << "Smaller number is: " << smaller(x, y) << std::endl;				//smaller will be converted to int and show up as 25
	std::cout << "Smaller number is: " << smaller(y, x) << std::endl << std::endl;	//smaller will show up as 25.14
	system("pause");
	return 0;
}