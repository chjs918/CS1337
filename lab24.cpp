// Jisoo Choi
// CS 1337
// Lab 24

#include <iostream>
#include <bits.h>
#include <climits>
#include <bitset>

extern const int N;

using namespace std;

// printQuaternary:  Writes the quaternary representation of word to
// output stream os.
void printQuaternary(int word, ostream& os){
	uint k = 2;
	
	for(int n = (N - 1) / k * k; n >= 0; n -= k) {
		os << getBits(word, n, k);
	}
}

// printOctal:  Writes the octal representation of word to output
// stream os.
void printOctal(int word, ostream& os){
	uint k = 3;
	
	for(int n = (N - 1) / k * k; n >= 0; n -= k) {
		os << getBits(word, n, k);
	}
}
