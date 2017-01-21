#include "StudentList.h" // StudentList
#include <iostream> // cout
#include <fstream> // ifstream
#include "studentList.h"


using namespace std;

int k;
int sort;

int main (){

StudentList s;

		ifstream in;
in.open("student2015.txt");
if (in.fail()) {
cout << "unable to open student2015.txt" << endl;
cin >> k;
return 0;
}
while (!in.eof()) {
Student *student = new Student();
in >> student->lastName >> student->firstName;
in >> student->studentId >> student->examMark; 

s.addStudent(student);


}
in.close();

s.print();


cout << "The studentlist2015 file has been sorted" << endl;

cin >> k;

}