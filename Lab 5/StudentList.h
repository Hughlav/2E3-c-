#ifndef STUDENTLIST_H_
#define STUDENTLIST_H_

#include <iostream> 
#include <fstream>
#include <string>

#include "Student.h"

using namespace std;

class StudentList {

public:
	
	Student *head;

	StudentList();
	~StudentList();


	void addStudent(Student *student);
	void print();
	
	
};

#endif STUDENTLIST_H_