#include <iostream>
#include <stdio.h>

using namespace std;

#include "Wizard.h"

Wizard::Wizard(){
	strength = rand() % 20 + 1;
	skill = rand() % 5 + 1;
	alive = true;
}

void Wizard::print() {

	cout << "Strength = " << strength << endl;
	cout << "Skill = " << skill << endl;
	if (alive == true) {
		cout << "The Wizard is still alive" << endl;
	}
	else {
		cout << "The Wizard is dead" << endl;
	}

}

void Wizard::defend(int attackdamage) {

	int roll = rand() % 6 + 1;
	int defence = roll*skill;
	int damage = attackdamage - defence;
	if (defence >= attackdamage) {
		return ;
	}

	else {
		strength = strength - damage;
		if (strength <= 0) {
			strength = 1;
		}
		return ;
	}

}