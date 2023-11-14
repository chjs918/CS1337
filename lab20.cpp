// Jisoo Choi
// CS 1337
// Lab 20

#include <iostream>
#include <cstdlib>

using namespace std;

// Function isNegative returns true if num is negative and false otherwise
bool isNegative(int num) {
	uint mask = 0; //000..000
	mask = ~mask; //111...111
	mask = mask >> 1; //01111..111
	mask = ~mask; //1000...000
	
	if((num & mask) != 0)
		return true;
	return false;
}