// template-specializations.cpp : Defines the entry point for the console application.
//Source: Bucky's C++ Programming Tutorial
//Whenever user passes in a character we want to be able to something differently : Template Specialization
#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
class Spunky {
public:
	Spunky(T x){
		cout << x << " is not a character!" << endl;
	}
};

/*
template <class T>
Spunky::Spunky(T x) {
	cout << x << " is not a character!" << endl;
}
*/

template <>	//tells that we are using template specialization
class Spunky <char> {//tell which data type we are specializing in
public:
	Spunky(char x)
	{
		cout << x << " is indeed a charachter!" << endl;
	}
};

int main()
{
	Spunky<int> obj1(7);
	Spunky<double> obj2(3.7);
	Spunky<char> obj3('q');
	system("pause");
    return 0;
}

