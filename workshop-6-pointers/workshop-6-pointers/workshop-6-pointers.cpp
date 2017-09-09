// workshop-6-pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX = 20;

void bigChar2end(char*);

int main()
{
	char str[MAX];
	cout << "Enter a string: ";
	cin >> str;
	bigChar2end(str);
	system("pause");
    return 0;
}

void bigChar2end(char* str)
{
	char *p = &str[0];
	char *q = &str[1];

	while (*q != '\0')
	{
		if (*p > *q)
		{
			char temp = *p;
			*p = *q;
			*q = temp;
		}

		++p;
		++q;
	}
	cout << "Final string is: " << str << endl;

	cout << endl;
}

