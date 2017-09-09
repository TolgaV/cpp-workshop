// workshop-2-user-defined-functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void isDivisible();
int sumOfDigits(int);

int main()
{
	cout << "Wish to read in how many sets of integers: ";
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << num << endl << endl;
		isDivisible();
	}
	system("pause");
    return 0;
}

int sumOfDigits(int number)
{
	int temp = number;
	int s = 0;
	while (temp > 0)
	{
		s += temp % 10;
		temp /= 10;
	}
	return s;
}

void isDivisible()
{
	cout << "Enter N and K: " << endl;
	int N = 0, K = 0;
	cin >> N >> K;
	int sum = sumOfDigits(N);
	if ((sum % K) == 0)
		cout << N << " is divisible by " << K << endl << endl;
	else
		cout << N << " is not divisible by " << K << endl << endl;
	return;
}

