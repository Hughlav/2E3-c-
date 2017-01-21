#ifndef NPC_HPP
#define NPC_HPP

#include <iostream>
#include <stdio.h>


using namespace std;

class NPC {

public:

	int strength;
	int skill;
	bool alive;


	virtual void print();
	virtual int attack();
	virtual void defence(int attackdamage);
	bool isAlive();


	NPC();
	NPC(int _strength,int _skill, bool _alive);
};

#endif 