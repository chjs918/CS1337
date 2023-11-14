// Jisoo Choi
// CS 1337
// Lab 22

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;

using namespace std;

// sizeOfShort determines the number of bits in the internal
// representation of a short
unsigned int sizeOfShort(void) {
	short i = -1;
	uint cnt = 0;
	
	while(i != 0) {
		i = i << 1;
		cnt++;	
	}
	
	return cnt;
}

// sizeOfInt determines the number of bits in the internal
// representation of an int
unsigned int sizeOfInt(void){
	int i = -1;
	uint cnt = 0;
	
	while(i != 0) {
		i = i << 1;
		cnt++;	
	}
	
	return cnt;
}

// sizeOfLong determines the number of bits in the internal
// representation of a long
unsigned int sizeOfLong(void){
	long i = -1;
	uint cnt = 0;
	
	while(i != 0) {
		i = i << 1;
		cnt++;	
	}
	
	return cnt;
}

// sizeOfLongLong determines the number of bits in the internal
// representation of a long long
unsigned int sizeOfLongLong(void) {
	long long i = -1;
	uint cnt = 0;
	
	while(i != 0) {
		i = i << 1;
		cnt++;	
	}
	
	return cnt;
}