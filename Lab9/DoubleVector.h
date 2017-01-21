#pragma once

/*
* Vector of double
*/
class DoubleVector {

public:
	// constructor
	DoubleVector(int n);
	//copy constructor 
	DoubleVector(DoubleVector &Vector);

	void operator= (DoubleVector &Vector);

	// destructor
	~DoubleVector();

	// returns a reference to the n-th element
	double& operator[](int n);

	// returns a const reference to the n-th element
	const double& operator[](int n) const;

	// returns the size of the vector
	int getSize() const;

	// print the vector
	void print() const;

private:
	double* data;
	int size;

};