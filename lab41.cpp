// Jisoo Choi
// CS 1337
// Lab 41

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 41 \n\n";

int main() {
	char ch;
	
	//output ID Line
	cout << ID;
	
	//read an unknown # of chars from standard input character-by-character.
	while(cin.get(ch)) {
		if(isupper(ch))
			cout << static_cast<char>(tolower(ch));
		else if (isdigit(ch) || ispunct(ch))
			continue;
		else
			cout << ch;
	}
	
	return 0;
}