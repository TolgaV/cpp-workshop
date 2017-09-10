// polymorphism-b.cpp : Defines the entry point for the console application.
// Virtual Functions

#include "stdafx.h"
#include <iostream>
using namespace std;

class Enemy {
	//we want every enemy object to be able to attack.
	//we want derived classes to be able to attack differently 
public:
	virtual void attack(){}
};

class Ninja : public Enemy {
public:
	void attack() {
		cout << "Ninja attack!" << endl;
	}
};
class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster attack!" << endl;
	}
};


int main() 
{
	Ninja n;
	Monster m;
	Enemy* enemy1;
	Enemy* enemy2;
	//type of enemy1 is a pointer of Enemy type.
	enemy1 = &n;
	enemy2 = &m;
	enemy1->attack();
	enemy2->attack();
	system("pause");
	return 0;
}