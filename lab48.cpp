// Jisoo Choi
// CS 1337
// Lab 48

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

// Function replaceDigits replaces each digit character of s with '#';
// all other characters are left unchanged. The transformed string is
// returned to the calling function.
string replaceDigits(string s) {
	
	for(unsigned int i = 0; i < s.size(); i++) {
		//check to see if we are at the beginning of a wordCt
		if((s[i] >= '0')&&(s[i] <= '9'))
			s[i] = '#';
	}
	
	return s;
}