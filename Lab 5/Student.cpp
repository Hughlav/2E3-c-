#include <iostream> 
#include <fstream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student() {
	lastName = "";
	firstName = "";
	studentId = 0;
	examMark = 0;
	next = NULL;
}



int Student::comp(Student *student) {
	
	string a = lastName;
	string b = student->lastName;
	string c = firstName;
	string d = student->firstName;

	int r = a.compare(b);
	if (r == 0) {
		int s = c.compare(d);
		return s;
	}
	else {
		return r;
	}
}