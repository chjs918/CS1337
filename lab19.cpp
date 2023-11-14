// Jisoo Choi
// CS 1337
// Lab 19

typedef unsigned int uint;

using namespace std;

// Function isOdd returns true if num is odd and false otherwise
bool isOdd(int num) {
	uint mask = 1;
	
	//== > &, so we needs parenthesis.
	if((num & mask) == 1)
		return true;
	return false;
}