// workshop-5-file-processing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

using namespace std;
const int MAX = 80;
int main()
{
	fstream afile;
	ifstream infile;

	char line[80];

	// From text file to binary file
	infile.open("infile.txt");
	afile.open("infile.dat", ios::out | ios::binary);

	while (infile.getline(line, MAX))
		afile.write(reinterpret_cast <const char *>(line),
			sizeof(line));

	infile.close();
	afile.close();

	// From binary file back to text file
	ofstream outfile;
	outfile.open("outfile.txt");

	afile.open("infile.dat", ios::in | ios::binary);
	while (afile.read(reinterpret_cast <char *>(line),
		sizeof(line)))
		outfile << line << endl;

	afile.close();
	outfile.close();
}