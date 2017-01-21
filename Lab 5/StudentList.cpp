#include <iostream> 
#include <fstream>
#include <string>
#include <iomanip>

#include "StudentList.h"


using namespace std;

StudentList::StudentList(){
	head = NULL;
}

StudentList::~StudentList(){
	while (head != NULL){
		Student *p = head;
		head = head->next;
		delete p;
	}

}

void StudentList::addStudent(Student *student){
	if (head == NULL || student->comp(head) <= 0) {
		student->next = head;
		head = student;
		return;
	}
	else {
		Student *temp = head;
		
		while ((temp->next) && (student->comp(temp->next)) > 0) {
			temp = temp->next;
		}
		student->next = temp->next;
		temp->next = student;
		return;
	}

}

void StudentList::print() {

	Student *p = head;
	ofstream out;
	out.open("student2015Sorted.txt");
	if (out.fail()) {
		cout << "unable to open student2015Sorted.txt" << endl;
		return;
	}

	while(p != NULL) {
		
		out << left << setw(10) << setfill('-') << p->lastName << " ";
		out << setw(10) << p->firstName << " ";
		out << setw(5) << p->studentId << " ";
		out << setw(5) << p->examMark << endl;
		
		
		p = p->next;


	}
	out.close();
}