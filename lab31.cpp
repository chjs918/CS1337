// Jisoo Choi
// CS 1337
// Lab 31

#include <iostream>
#include <bits.h>
#include <string>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 31 \n\n";

int main(){
	short HammingChar;
	int offendingBit;
	//int bit1, bit2, bit4, bit8, offendingBit;
	char ch;
	
	//output ID line
	cout << ID;
	
	//read an unknown # of signed shorts, each representing abort
	//Hamming Character
	while(cin >> HammingChar) {
		offendingBit = 0;
		
		//Calculate parity bit 1 using the formula
		HammingChar = getBits(HammingChar, 0, 11);
		
	
		//compare the claculated value to the observed value
		//if there is a discrepancy, increment offendingBit by the 
		//appropriate amount
		if(getBit(HammingChar, 10) != (getBit(HammingChar, 8) + getBit(HammingChar, 6) + getBit(HammingChar, 4)
					+ getBit(HammingChar, 2) + getBit(HammingChar, 0)) % 2) 
				offendingBit += 1;
				
		//repeat the above two steps for parity bits 2, 4, and 8
		if(getBit(HammingChar, 9) != (getBit(HammingChar, 8) + getBit(HammingChar, 5) + getBit(HammingChar, 4)
					+ getBit(HammingChar, 1) + getBit(HammingChar, 0)) % 2) 
				offendingBit += 2;
		if(getBit(HammingChar, 7) != (getBit(HammingChar, 6) + getBit(HammingChar, 5) + getBit(HammingChar, 4) % 2) 
				offendingBit += 4;
		if(getBit(HammingChar, 3) != (getBit(HammingChar, 2) + getBit(HammingChar, 1) + getBit(HammingChar, 0) % 2) 
				offendingBit += 8;
		

		//num = getBit(HammingChar, 8)
		cout << "Debug: offendingBit:"<<offendingBit << endl;
		//if offendingBit is not zero, correct the errant bit
		//Build ch from HammingChar
	}
}