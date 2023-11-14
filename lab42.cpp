// Jisoo Choi
// CS 1337
// Lab 42

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 42 \n\n";

void initializeArray(int *array, int n, int value);

int main() {
	int ws = 0, punct = 0, digits[10], alpha[26];
	char ch;
	
	//output ID Line
	cout << ID;
	
	//initialize the elements of digits and alpha to 0
	initializeArray(digits, sizeof(digits) / sizeof(int), 0);
	initializeArray(alpha, sizeof(alpha) / sizeof(int), 0);

	//read an unknown # of chars from standard input character-by-character
	while(cin.get(ch)) {
		if(isspace(ch))
			++ws;
		else if(ispunct(ch))
			++punct;
		else if(isdigit(ch))
			++digits[ch - '0'];
		else if(isalpha(ch)) {
			ch = toupper(ch);
			++alpha[ch - 'A'];
		}
	}
	
	if(ws > 0)
		cout << "whitespace = " << ws << endl;
	
	if(punct > 0)
		cout << "punctuation = " << punct << endl;
	
	//output table header
	cout << setfill('-') << setw(17) << '-' << setfill(' ') << endl;
	cout << "Character   Count" << endl;
	cout << setfill('-') << setw(17) << '-' << setfill(' ') << endl;
	
	//output the non-zero counts from the digits array
	for(ch = '0'; ch <= '9'; ++ch)
	{
		cout << setw(5) << ch << endl;
	}
	
	//output the non-zero counts from the alpha array
	
	//ouput the table footer
	cout << setfill('-') << setw(17) << '-' << setfill(' ') << endl;

}

void initializeArray(int *array, int n, int value) {
	for(int *ptr = array; ptr < array + n; ++ptr)
		*ptr = value;
}