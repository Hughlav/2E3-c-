//Bubble sort and selection sort implimentation and
//testing time taken to sort an array of 1000 integers
#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>


using namespace std;
int n = 1000;

void bubbleSort(int array[n]);
void selectionSort(int array[n]);

int main(int argc, char *argv[]) {
	int i;
	int randnums[n];

	for (i = 0; i < n; i++) {
		randnums[i] = rand();
	}

	int sort = atoi(argv[1]);

	if (sort == 1) {

		cout << "before sorting:" << endl;
		cout << "Array [0]: " << randnums[0] << endl;
		cout << "Array [999]: " << randnums[999] << endl;


		clock_t tStart = clock();

		bubbleSort(randnums);

		clock_t tEnd = clock();

		cout << "after sorting:" << endl;
		cout << "Array [0]: " << randnums[0] << endl;
		cout << "Array [999]: " << randnums[999] << endl;
		cout << "TIME: " << (double)(tEnd - tStart);

		return 1;


	}

	if (sort == 2) {


		cout << "before sorting:" << endl;
		cout << "Array [0]: " << randnums[0] << endl;
		cout << "Array [999]: " << randnums[999] << endl;

		clock_t tStart = clock();
		selectionSort(randnums);
		clock_t tEnd = clock();

		cout << "after sorting:" << endl;
		cout << "Array [0]: " << randnums[0] << endl;
		cout << "Array [999]: " << randnums[999] << endl;
		cout << "TIME: " << (double)(tEnd - tStart);

		return 1;

	}
	else {
		cout << argv[0] << " " << argv[1] << endl;
		cout << "usage: sort type" << endl;
		cout << "type: 1 (for bubble sort) or 2 (for selection sort)" << endl;
		return 1;
	}

}


void bubbleSort(int array[]) {
	bool swapped = true;
	int j = 0;
	while (swapped) {
		swapped = false;
		j++;

		for (int i = 0; i < n - j; i++) {
			if (array[i] > array[i + 1]) {
				std::swap(array[i], array[i + 1]);
				swapped = true;
			}
		}
	}
}

void selectionSort(int array[]) {

	for (int i = 0; i < n; i++) {
		int smallestIndex = i;

		for (int j = i + 1; j < n; ++j) {

			if (array[j] < array[smallestIndex]) {

				smallestIndex = j;
			}
		}

		swap(array[i], array[smallestIndex]);
	}
}

