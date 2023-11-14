// Jisoo Choi
// CS 1337
// Lab 39

#include <iostream>
#include <cstdlib>

using namespace std;

// modeUsingIndexing:  Using indexing, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingIndexing(const int array[], int n, int& count) {
	count = 0;
	int i, j, tempCt, mode;
	
	for(i = 0; i < n; i++) {
		tempCt = 1;
		for(j = i + 1; j < n; j++) {
			if(array[i] == array[j])
				tempCt++;
		}
	
		if(tempCt > count) {
			mode = array[i];
			count = tempCt;
		}
	}
	
	return mode;
}

// modeUsingPointers:  Using pointers, this function returns the mode
// of the n-element integer array.  The mode is defined as the value
// which occurs most frequently in a set of data.  The count of the
// number of times the mode occurs in the array is returned via the
// third parameter.
int modeUsingPointers(const int *array, int n, int& count) {
	const int *i, *j;
	int mode, tempCt; 
	
	count = 0;
	
	for(i = array; i < array + n; i++) {
		tempCt = 1;
		for(j = i + 1; j < array + n; j++) {
			if(*i == *j)
				tempCt++;
		}
		
		if(tempCt > count) {
			mode = *i;
			count = tempCt;
		}
	}
	
	return mode;
			
}