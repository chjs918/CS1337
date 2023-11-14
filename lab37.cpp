// Jisoo Choi
// CS 1337
// Lab 37

using namespace std;

// reverseArrayUsingIndexing:  Using indexing, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingIndexing(int array[], int n) {
	int i, j , tmp;
	
	for( i = 0, j = n - 1; i < j; i++, j--) {
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

// reverseArrayUsingPointers:  Using pointers, this function reverses
// the elements of the n-element integer array in place; that is, the
// function exchanges the first and last elements, the second and
// next-to-last elements, and so on.
void reverseArrayUsingPointers(int *array, int n) {
	int *i, *j , tmp;
	
	for( i = array, j = array + n - 1; i < j; i++, j--) {
		tmp = *i;
		*i = *j;
		*j = tmp;
	}
}