// Jisoo Choi
// CS 1337
// Lab 27

#include <climits>
#include <bits.h>

using namespace std;

// invBit:  returns value of word with bit n inverted
unsigned int invBit(unsigned int word, int n) {
	if(getBit(word, n) == 1) 
		word = setBit(word, n, 0);
	else
		word = setBit(word, n, 1);
	return word;
}
