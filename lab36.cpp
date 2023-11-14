// Jisoo Choi
// CS 1337
// Lab 36

using namespace std;

// largestUsingIndexing:  receives an n-element integer array and returns
// the index of the largest element; the function uses indexing
int largestUsingIndexing(const int array[], int n) {
	int largestIndex = 0, i, largest;
	largest = array[largestIndex];
	
	for(i = 0; i < n; i++) {
		if(array[i] > largest) {
			largest = array[i];
			largestIndex = i;
		}
	}
	return largestIndex;
}

// largestUsingPointers:  receives an n-element integer array and returns
// a pointer to the largest element; the function uses pointers
int *largestUsingPointers(const int *array, int n) {
	//int *largest = array;
	const int *largest = array;
	//int *cost larget = array;
	//comst int *const largest = array;
	
	const int *ptr;
	int largestValue = *array;
	
	for(ptr = array + 1; ptr < array + n; ptr++) {
		if(*ptr > largestValue) {
			largestValue = *ptr;
			largest = ptr;
		}
	}
	return const_cast<int *>(largest);
}
