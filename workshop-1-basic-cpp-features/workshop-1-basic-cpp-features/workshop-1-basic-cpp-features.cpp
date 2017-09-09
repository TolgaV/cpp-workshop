// workshop-1-basic-cpp-features.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Wish to read in how many sets of integers: ";
	int num = 0;
	int N = 1, K = 1;
	cin >> num;
	cout << num << endl << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "Enter N and K: ";
		cin >> N;
		cout << N << "    ";
		cin >> K;
		cout << K << endl;
		int NsumOfDigits = 0;
		int digitCtr = 0;
		int Ntemp = N;
		while (Ntemp > 0)
		{
			NsumOfDigits += Ntemp % 10;
			Ntemp /= 10;
		}
		if ((NsumOfDigits % K) == 0)
		{
			cout << "N Total is: " << NsumOfDigits << endl;
			cout << N << " is divisible by " << K << endl;
		}
		else
		{
			cout << N << " is not divisible by " << K << endl;
		}
	}
	cout << endl << "Press Enter to Continue..." << endl;
	//char temp;
	//cin.get(temp);
	//cin >> temp;
	//temp = cin.get();
	system("pause");
	return 0;
}

