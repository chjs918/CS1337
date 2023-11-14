// Jisoo Choi
// CS 1337
// Lab 28

#include <climits>
#include <bits.h>

using namespace std;

// printHexadecimal:  Writes the hexadecimal representation of word to
// output stream os.
void printHexadecimal(int word, ostream& os) {
	int N = sizeof(int) * CHAR_BIT;
	int tmpBits;
	
	for(int i = (N - 1) / 4 * 4 ; i >= 0; i -= 4) {
		tmpBits = getBits(word, i, 4);
		if(tmpBits == 10) {
			os << 'A';
		} else if(tmpBits == 11) {
			os << 'B';
		} else if(tmpBits == 12) {
			os << 'C';
		} else if(tmpBits == 13) {
			os << 'D';
		} else if(tmpBits == 14) {
			os << 'E';
		} else if(tmpBits == 15) {
			os << 'F';
		} else {
			os << tmpBits;
		}
	}
}