// Jisoo Choi
// CS 1337
// Lab 12

#include <iostream>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 12 \n\n";

int main() {
	int abcde, a, b, c, d, e, ab;
	
	cout << ID;
	
	//Loop through the integers 10000, 10001, 10002, ..., 99999
	for(abcde = 10000; abcde < 100000; ++abcde) {
		a = abcde / 10000;
		ab = abcde / 1000;
		b = abcde / 1000 % 10;
		c = abcde / 100 % 10;
		d = abcde / 10 % 10;
		e = abcde % 10;
		
		if(ab == d * e && b == 4 * e && e == d - 7 && c == a + b) 
			cout << abcde << endl;
	}
	
	return 0;
	
}