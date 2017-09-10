// polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja : public Enemy {
public:
	void attack() {
		cout << "I am a ninja.. -" << attackPower << " damage!" << endl;
	}
};
class Monster : public Enemy {
public:
	void attack() {
		cout << "I am a monster.. -" << attackPower << " damage!" << endl;
	}
};


int main()
{
	Ninja n;
	Monster m;
	/* Both Ninja and Monster are of type Enemy (since they inherited
	from it), thus we can use a pointer of type Enemy to point their addresses */
	Enemy* enemy1 = &n;
	Enemy* enemy2 = &m;
	/* Both way works for calling a public function which is
	in base class, since its a public member its inherited in
	both derive classes; Ninja and Monster */
	//enemy1->setAttackPower(20);
	//enemy2->setAttackPower(30);
	n.setAttackPower(25);
	m.setAttackPower(55);
	/* For attack, since Enemy class doesn't have attack() function we can't use enemy1 pointer
	which is of type Enemy */
	n.attack();
	m.attack();
	//enemy2->attack(); enemy2 doesn't have the member attack
	system("pause");
    return 0;
}

