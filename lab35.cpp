// Jisoo Choi
// CS 1337
// Lab 35

#include <iostream>
#include <cstdlib>

using namespace std;

// sumUsingIndexing:  receives an n-element integer array and returns
// the sum of the elements; the function uses indexing
int sumUsingIndexing(const int array[], int n) {
	int total = 0, i;
	
	for(i = 0; i < n ; i++) 
		total += array[i];

	return total;
}

// sumUsingPointers:  receives an n-element integer array and returns
// the sum of the elements; the function uses pointers
int sumUsingPointers(const int *array, int n) {
	const int *ptr;
	int total = 0;
	
	for(ptr = array; ptr < array + n ; ptr++) 
		total += *ptr;

	return total;
}