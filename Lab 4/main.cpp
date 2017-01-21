#include <ctime>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include "NPC.h"
#include "Team.h"
#include "Wizard.h"


using namespace std;



int main() {

	int x = 0;
	srand( (unsigned int) time(0));


	cout << "Please enter the number of NPCs per team:" << endl;
	int num;
	cin >> num;
	//cout << "Please enter the number of rounds:" << endl;
	//int round;
	//cin >> round;

	Team homeTeam;
	homeTeam.head=NULL;
	homeTeam.tail=NULL;
	Team awayTeam;
	awayTeam.head=NULL;
	awayTeam.tail=NULL;

	// extract the random position of the two wizards
	int indexWizard1 = rand() % num+1;
	int indexWizard2 = rand() % num+1;
	
	//cout << "wiz 1 " << indexWizard1 << endl;
	//cout << "wiz 2 " << indexWizard2 << endl;
	

	for (int i = 0; i < num; i++) {
		homeTeam.add(i == indexWizard1 ? new Wizard() : new NPC());
		awayTeam.add(i == indexWizard2 ? new Wizard() : new NPC());
		homeTeam.at(i)->print();
	}

	// THE GAME


	//print starting stats

	cout << "The home team stats are: " << endl;

	for (int m = 0; m < num; m++) {
	//	if (m == indexWizard1) {
	//		cout << "NPC (Wizard) (" << m + 1 << "): " << endl;
	//		homeTeam.at(m)->Wizard::print();
	//		Wizard::print()
	//	}
		cout << "NPC (" << m + 1 << "): " << endl;
		homeTeam.at(m)->print();
		cout << endl;
	}

	cout << endl << endl;

	cout << "The Away team stats are: " << endl;

	for (int n = 0; n < num; n++) {
		cout << "NPC (" << n + 1 << "): " << endl;
		awayTeam.at(n)->print();
		cout << endl;
	}

	cout << endl << endl;

	cout << "The battle commences " << endl;

	//home team attacks away team
	for (int j = 0; j < num; j++) {
		awayTeam.at(j)->defence(homeTeam.at(j)->attack());
	}

	//away team NPCs that are alive attack home team
	for (int k = 0; k < num; k++) {
		if (awayTeam.at(k)->isAlive()) {
			homeTeam.at(k)->defence(awayTeam.at(k)->attack());
		}
	}

	//print ending stats

	cout << "The home team stats after the battle are: " << endl;

	for (int m = 0; m < num; m++) {
		cout << "NPC (" << m + 1 << "): " << endl;
		homeTeam.at(m)->print();
		cout << endl;
	}

	cout << endl << endl;

	cout << "The Away team stats after the battle are: " << endl;

	for (int n = 0; n < num; n++) {
		cout << "NPC (" << n + 1 << "): " << endl;
		awayTeam.at(n)->print();
		cout << endl;
	}

	cout << endl << endl;

	//find number alive on each team
	int homeAlive = 0;
	int awayAlive = 0;

	for (int l = 0; l < num; l++) {
		if (awayTeam.at(l)->isAlive())
			awayAlive++;
		if (homeTeam.at(l)->isAlive())
			homeAlive++;
	}

	cout << "There are " << homeAlive << " left alive on the Home team" << endl;
	cout << "There are " << awayAlive << " left alive on the Away team" << endl << endl;

	//print results

	if (homeAlive == awayAlive) {
		cout << "The battle is a draw" << endl;
		cin >> x;
		return 0;
	}
	else {
		if (homeAlive > awayAlive) {
			cout << "The Home team wins" << endl;
			cin >> x;
			return 0;
		}

		if (homeAlive < awayAlive) {
			cout << "The Away team wins" << endl;
			cin >> x;
			return 0;
		}
	}


}