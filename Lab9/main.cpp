#include "DoubleVector.h";
#include <iostream>
using namespace std;
int k; 

int main() {
	DoubleVector x(4);
	x[0] = 0;
	x[1] = 5;
	x.print();
	cout << endl;

	
	 DoubleVector y = x;
	 y[2] = 3;
	 y.print(); 
	 cout << endl;

	 //Showing the copy constructor

	 DoubleVector h(5);
	 h[0] = 12;
	 h[1] = 80;
	 h[2] = 142;
	 h[3] = 152;
	 h[4] = 12.56;

	 h.print();
	 cout << endl;

	 DoubleVector m(h);

	 m.print();
	 cout << endl;
	 cout << "the size of the coppied array is: " << m.getSize();
	 cout << endl;

	//showing use of not letting elements being added into a full array
	 DoubleVector z(2);
	 z[0] = 0;
	 z[1] = 5;
	 z[2] = 4;

	 z.print();

	 cin >> k;

	return 0;
}
