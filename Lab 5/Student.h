#ifndef STUDENT_H_
#define STUDENT_H_


#include <iostream> 
#include <fstream>
#include <string>

using namespace std;


class Student {
public:

	
	string lastName;
	string firstName;
	int studentId;
	int examMark;
	Student *next;

	Student();
	int comp(Student *student);
};


#endif STUDENT_H_ 