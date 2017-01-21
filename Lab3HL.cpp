//program to function as a shopping list where items can be added removed
//program can be exited
#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int choice = 0;
string item;
int quantity;
double price;
int getridof;

void additemtolist(string name, int quantity, double price);
void printlist(struct node);

struct grocery {
	string name;
	double price;
	int quantity;
	grocery *next;
};



int main(){

	cout << "Your list is empty" << endl;
	grocery *head;
	while (choice !=3){
		cout << "Make a choice: (1) Add an item, (2)remove an item, (3) Exit" << endl;
		cin >> choice;

		if( choice = 1){
			cout << "Enter item name: " << endl;
			cin >> item;
			cout << "Enter item quantity: " << endl;
			cin >> quantity;
			cout << "Entre item price: " << endl;
			cin >> price;

			additemtolist(item, quantity, price);


		}

		if(choice = 2) {
			cout << "which item do you want to delete? " << endl;
			cin >> getridof;


		}



	}

	cout << "bye" << endl;

}


void printlist(struct node) {
	while (next != NULL){
		
	}
}


void additemtolist(string name, int quantity, double price) {
	grocery *temp;
	temp_>name=name;
	temp_>quantity=quantity;
	temp_>price=price;

}



