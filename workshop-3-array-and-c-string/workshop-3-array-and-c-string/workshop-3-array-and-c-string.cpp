// workshop-3-array-and-c-string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX = 20;

int str2int(char*);

int main()
{
	char str[MAX];
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter string of digits: ";
		cin >> str;

		cout << "The integer is " << str2int(str) << endl << endl;
	}

    return 0;
}

int str2int(char* str)
{
	int number = 0;
	while (*str != '\0')
	{
		number = number * 10 + *str - '0'; 
		//Subtracting '0' is required for the offset
		//The offset that come with character '0' is 48, and '1' is 49 etc. that's why we need to subract it.
		*str++;
	}
	return number;
}


