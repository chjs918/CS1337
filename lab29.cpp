// Jisoo Choi
// CS 1337
// Lab 29

#include <bits.h>

using namespace std;

// decompress: decompresses the low-order 16 bits of info and
// returns age, grade, sex, and GPA
void decompress(unsigned int info, unsigned int& age,
                unsigned int& grade, char& sex, double& GPA) {
	//retrive the age from info using getBits
	age = getBits(info, 12, 4) + 3;
	grade = getBits(info, 8, 4);
	sex = (getBit(info, 7) == 1) ? 'M' : 'F';
	GPA = getBits(info, 4, 3) + getBits(info, 0, 4) * 0.1;

}