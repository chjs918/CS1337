// Jisoo Choi
// CS 1337
// Lab 54

#include <lab54.h>

using namespace std;

// Function rightToLeftSort - sorts the n-element array of strings by
// comparing the last characters first, then the next-to-last
// characters, and so forth
void rightToLeftSort(string array[], int n) {
	
	string *ptr;
	
	for(ptr = array; ptr < array + n; ++ptr) {
		*ptr = stringReverse(*ptr);
	}
	
	sort(array, n);
	
	for(ptr = array; ptr < array + n; ++ptr)
		*ptr = stringReverse(*ptr);
}