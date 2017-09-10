#include "stdafx.h"
#include <iostream>
using namespace std;

void printNumber(int x) {
	cout << "Inputted integer is: " << x << endl;
}
void printNumber(float x) {
	cout << "Inputted float is: " << x << endl;
}

int main() {
	int a = 5;
	float b = 5.1;
	printNumber(a);
	printNumber(b);
	return 0;
}