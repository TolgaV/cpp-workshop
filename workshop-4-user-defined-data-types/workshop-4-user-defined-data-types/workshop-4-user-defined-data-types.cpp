// workshop-4-user-defined-data-types.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum Status { Biggest, Smallest, Between };
const int MAX = 80;
void get3Integers(int&, int&, int&);
Status getStatus(int, int, int);
void getStatusLabel(Status, char[]);
int main()
{
	int a, b, c;
	char label[MAX];

	srand(time(NULL));

	for (int i = 1; i <= 10; i++)
	{
		get3Integers(a, b, c);
		Status s = getStatus(a, b, c);
		getStatusLabel(s, label);

		cout << a << "\t" << b << "\t" << c << endl;
		cout << "==> " << label << endl;
	}
	system("pause");
	return 0;
}
void get3Integers(int& a, int& b, int& c)
{
	a = rand();
	b = rand();
	c = rand();
}


Status getStatus(int a, int b, int c)
{
	if (c >= a && c >= b)
		return Biggest;
	else if ((c >= a && c <= b) || (c >= b && c <= a))
		return Between;
	else
		return Smallest;
}
void getStatusLabel(Status s, char str[])
{
	switch (s)
	{
	case Biggest: strcpy(str, "Biggest");
		break;
	case Smallest: strcpy(str, "Smallest");
		break;
	default: strcpy(str, "Between");
	}
}