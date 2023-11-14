// Jisoo Choi
// CS 1337
// Lab 30

#include <bits.h>
#include <climits>

using namespace std;

extern const unsigned int N; /*= sizeof(int) * CHAR_BIT;*/  // # of bits in an int

/*
Scan word, starting from bit startingBit, toward more significant
bits, until the first 0 bit is found. Return the index of the found
bit.  If the bit at startingBit is already what's sought, then
startingBit is returned.  If there's no bit found, then UINT_MAX is
returned.
*/
unsigned int scan0(unsigned int word, unsigned int startingBit) {
	
	while(startingBit < N) {
		if(getBit(word, startingBit) == 0) 
			return startingBit;
		startingBit++;
	}
	
	return UINT_MAX;
}
	