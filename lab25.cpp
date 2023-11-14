// Jisoo Choi
// CS 1337
// Lab 25

#include <bits.h>

using namespace std;

// compress:  compresses age, grade, sex, and GPA into the lower 16
// bits of an unsigned int
unsigned int compress(unsigned int age, unsigned int grade, char sex, double GPA) {
	uint compressed = 0;

	// Place the age - 3 in compressed starting at bit 12 for a length of 4
	compressed = setBits(compressed, 12, 4, age - 3);
	compressed = setBits(compressed, 8, 4, grade);
	compressed = setBit(compressed, 7, (sex == 'M') ? 1 : 0);
	compressed = setBits(compressed, 4, 3, static_cast<int>(GPA));
	compressed = setBits(compressed, 0, 4, static_cast<int>(GPA * 10) % 10);
	
	return compressed;
}