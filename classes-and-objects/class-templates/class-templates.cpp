// class-templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
class Tol {
	T first, second;	//2 data members declared of generic type T. In private access
public:
	Tol(T a, T b){		//passing in 2 numbers of generic type T.
		first = a;
		second = b;
	}
	T bigger();
};

template <class T>		//we need this line everytime we get out of scope of the previously declared one
T Tol<T>::bigger() {
	return (first > second ? first : second);
}

int main()
{
	Tol <int> tolobject(69, 105);	//<int> states that we are substituting T with int.
	Tol <int> * tolpoint = &tolobject;
	cout << tolpoint->bigger() << endl;
	cout << tolobject.bigger() << endl;
	system("pause");
    return 0;
}

