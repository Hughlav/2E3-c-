#include <iostream>
#include "NPC.h"

using namespace std;


void NPC::print() {

	cout << "Strength = " << strength <<  endl;
	cout << "Skill = " << skill << endl;
	if (alive == true){
		cout << "The NPC is still alive" << endl;
	}
	else {
		cout << "The NPC is dead" << endl;
	}

}

int NPC::attack() {

	int roll = rand()%6 + 1;
	int damage= roll*skill;
	return damage;
}


void NPC::defence(int attackdamage) {

	int roll = rand() % 6 + 1;
	int defence = roll*skill;
	int damage = attackdamage - defence;
	if (defence >= attackdamage) {
		return ;
	}

	else {
		strength = strength - damage;
		return ;
	}
}

NPC::NPC(){

	strength = rand()%20 + 1;
	skill = rand()%5 + 1;
	alive = true;
}

NPC::NPC(int _strength,int _skill, bool _alive){

	strength = _strength;
	skill = _skill;
	alive = _alive;
}

bool NPC::isAlive() {
	if (strength <= 0)
		return alive = false;
	else
		return alive = true;
}
