#ifndef TEAM_HPP
#define TEAM_HPP

#include <stdio.h>
#include "NPC.h"



using namespace std;


struct Node {
	NPC*  npc;
	Node* next;
};

class Team {


	
	
public:
	Node *curr;

	void add(NPC* npc); // add one NPC to the list
	NPC* at(int i); // returns the #i NPC
	int numAlive(); // returns number of alive NPCs
	int getSize(); // returns the number of NPCs in this team
	
	Node *head;
	Node *tail;
	

	
	int size;

	Team();
};

#endif 