// classes-and-objects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void printNumber(int x) {
	cout << "Inputted integer is: " << x << endl;
}
void printNumber(float x) {
	cout << "Inputted float is: " << x << endl;
}

class TextOutput {
public:
	void text1() {
		cout << "Hey, how are you?" << endl;
	}
	void text2() {
		cout << "Hey, what's up?" << endl;
	}
	void text3() {
		cout << "I am " << age1 << "years old." << endl;
	}
	void text4() {
		cout << age2 << endl;
	}
	void ageUpdate(int a){
		age1 = a;
	}
private:
	int age1 = 24;
	string age2 = "I am 29 years old.";
};

/* Member Initializer List */
/*class People {
public:
	//constructor prototype
	People(string x, Birthday bo);
	void printInfo();
private:
	string name;
	Birthday dateOfbirth;
};
People::People()
: name(x), dateOfBirth(bo) //this part is the member initializer list, its inserted between curly brackets and parantheses. Basically initializing members through constructor.
{
}
*/



/* Operator Overloading*/
class Sally
{
public:
	int num;
	Sally();
	Sally(int);
	Sally operator+(Sally); //Return type of the function is Sally. operator+ ; + is the operator we want to overload.
};
Sally::Sally()				//Constructor for blank Sally objects
{}
Sally::Sally(int a) {		//Constructor for Sally object with one input
	num = a;
}
Sally Sally::operator+(Sally anotherSallyObject) {
	Sally newSallyObject;
	newSallyObject.num = num + anotherSallyObject.num; //if 2 other Sally objects had numbers num 20 and 10, then thi one will have 30
	return(newSallyObject);
}
int main()
{
	TextOutput textObject;
	textObject.text1();
	cout << endl << endl;
	TextOutput anotherObject;
	anotherObject.text2();
	anotherObject.text3();
	anotherObject.text4();
	textObject.ageUpdate(36);
	textObject.text3();
	anotherObject.text3();
	cout << endl << "---------" << endl;
	/* Function Overloading */
	int a = 5;
	float b = 5.1;
	printNumber(a);
	printNumber(b);
	/* Member Selection Operator '->' */
	TextOutput newObject;
	TextOutput* newPointer;
	newPointer = &newObject;
	newPointer->text4();	
	(*newPointer).text4();
	
	/* this Pointer*/
	//a special pointer keyword which points to current object, similar to self in Python

	/* Operator Overloading */
	Sally a(34);
	Sally b(21);
	Sally c;
	//c.num = a.add(b);	//we avoid this line thanks to overloading
	c = a + b; // + sign detected by C++ and we can do this now.
	return 0;
}
//Below is to put on header files' top. It means: if header ifle is not defined then define it.
//Its for aviding including the same thing more than one time.
//#ifndef NAMEOFHEADERFILE_H
//#def NAMEOFHEADERFILE_H
//...
//#endif


