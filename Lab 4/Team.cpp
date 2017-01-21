#include <iostream>
#include <stdio.h>

using namespace std;

#include "Team.h"
#include "NPC.h"

Team::Team() {
	head = NULL;
	tail = NULL;
	size=0;
}

void Team::add(NPC* npc) {

	size++;

	Node *curr = new Node;
	Node *NewNPC = new Node;
	NewNPC->npc = npc;
	NewNPC->next = NULL;
	curr = head;

	if (head == NULL) {
		head = tail = NewNPC;
		
	}

	else {
	tail->next = NewNPC;
	tail = NewNPC;
	}

}

NPC* Team::at(int i) {
	if (i <= size) {
		Node *curr = NULL;
		curr = head;
		for (int j = 0; j < i; j++) {
			curr = curr->next;
		}
		return curr->npc;
	}
	else {
		return  0;
	}
	}

int Team::numAlive() {
	int count = 0;
	Node *curr = NULL;
	curr = head;
	while (curr->next != NULL) {
		if (curr->npc->alive == true) {
			count++;
		}
		curr = curr->next;
	}
	
	return count;
}

int Team::getSize() { 
	return size; 
} 