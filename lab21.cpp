// Jisoo Choi
// CS 1337
// Lab 21

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// printBinary writes the binary representation of the integer n to
// output stream os
void printBinary(int n, ostream& os) {
	uint mask = 0; //000..000
	mask = ~mask; //111...111
	mask = mask >> 1; //01111..111
	mask = ~mask; //1000...000
	
	while(mask != 0) 
	{
		uint bit = n & mask;
		mask = mask >> 1;
		os << ((bit == 0) ? 0 : 1);
	//	bit == 0 ? os << 0 : os << 1;
	}
}