// Jisoo Choi
// CS 1337
// Lab 45

//cnt of line

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 45 \n\n";

int main() {
	int lineCt = 0;
	char prevCh = ' ', currCh;
	
	//output ID Line
	cout << ID;

	//read an unknown # of chars from standard input character-by-character
	while(cin.get(currCh)) {
		//check to see if we are at the beginning of a wordCt
		if(currCh == '\n')
			++lineCt;
		
		prevCh = currCh;
	}

	cout << "Number of lines = " << lineCt << endl;
	
	return 0;
}

