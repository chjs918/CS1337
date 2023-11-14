// Jisoo Choi
// CS 1337
// Lab 34

using namespace std;

void swap(int *x, int *y);

// Function orderThree has three reference parameters:  small, medium,
// and large.  The function returns the smallest of small, medium, and
// large in small; the middle value in medium; and the largest value
// in large.
void orderThree(int& small, int& medium, int& large) {
	if(small > medium) {
		//swap(small, medium); // invalid conversion
		//swap(*small, *medium); // s and m are not pointers
		swap(&small, &medium); 
	}
	if(medium > large) 
		swap(&medium, &large); 
	if(small > medium) 
		swap(&small, &medium); 
}

// Function orderThree has three parameters, each a pointer to an int
// value.  The function reorders the data so that the smallest of the
// values is pointed to by small, the middle value by medium, and the
// largest value by large.
void orderThree(int *small, int *medium, int *large) {
	if(*small > *medium) {
		swap(small, medium); // They are already pointers.
		//swap(*small, *medium); 
		//swap(&small, &medium); 
	}
	if(*medium > *large) 
		swap(medium, large); 
	if(*small > *medium) 
		swap(small, medium); 
}

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}