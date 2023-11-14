// Jisoo Choi
// CS 1337
// Lab 49

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void swap(char &ch1, char &ch2);

// Function stringReverse reverses the characters of string s; that is,
// the function exchanges the first and last characters, the second and
// next-to-last characters, and so on. The transformed string is 
// returned to the calling function.
string stringReverse(string s) {
	uint size = s.size();
	
	for(unsigned int i = 0; i < size / 2; i++) {
		swap(s[i], s[size - 1 - i]);
	}

	return s;
}

void swap(char &ch1, char &ch2) {
	char tmp;
	
	tmp = ch1;
	ch1 = ch2;
	ch2 = tmp;
}
