// Jisoo Choi
// CS 1337
// Lab 11

#include <iostream>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 11 \n\n";

int main() {
	int abc, a, b, c;
	
	cout << ID;
	
	//Loop through the integers 100, 101, 102, ..., 999
	for(abc = 100; abc < 1000; ++abc) {
		a = abc / 100;
		b = abc / 10 % 10;
		c = abc % 10;
		
		if((a + b + c) % 9 == 0 && a % 2 == 0 && b % 2 == 0 && c % 2 == 0) 
			cout << abc << endl;
	}
	
	return 0;
	
}