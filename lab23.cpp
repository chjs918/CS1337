// Jisoo Choi
// CS 1337
// Lab 23

#include <bits.h>
#include <climits>

extern const int N;

typedef unsigned int uint;

using namespace std;

// Returns the number of bits that are on (i.e., equal to 1) in word
unsigned int bitsOn(int word) {
	uint total = 0;
	
	for(int i = 0; i < N ; ++i) {
		total += getBit(word, i);
	}
	
	return total;
}
