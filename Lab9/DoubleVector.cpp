#include "DoubleVector.h"
#include <iostream>

using namespace std;

// constructor, allocate vector data and initialise size and data
DoubleVector::DoubleVector(int _size)
{
	size = _size;
	data = new double[size];
	for (int i = 0; i< size; i++)
		data[i] = 0;
}

// destructor, delete allocated vector data
DoubleVector::~DoubleVector()
{
	for (int i = 0; i< size; i++)
	delete[i] data;
}

// copy constructor
DoubleVector::DoubleVector(DoubleVector &Vector) {
	size = Vector.size;
	data = new double[size];
	for (int j = 0; j < size; j++) {
		data[j] = Vector.data[j];
	}
}

// = overloading
void DoubleVector::operator= (DoubleVector &Vector){
	size = Vector.size;
	data = new double[size];
	for (int j = 0; j < size; j++) {
		data[j] = Vector.data[j];
	}
}

// returns the size of the vector
int DoubleVector::getSize() const
{
	return size;
}

// print the vector
void DoubleVector::print() const
{
	cout << "[";
	for (int i = 0; i< size; i++) {
		cout << data[i];
		if (i<size - 1)
			cout << ", ";
	}
	cout << "]";
}

// returns a reference to the n-th element
double& DoubleVector::operator[](int n)
{
	if (n >= size) {
		cout << "The array is not big enough to hold any more than " << n << " elements" << endl;
		exit;
	}
	return data[n];
}

// returns a const reference to the n-th element
const double& DoubleVector::operator[](int n) const
{
	return data[n];
}
