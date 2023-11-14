// Jisoo Choi
// CS 1337
// Lab 47

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;


// Function uppercase converts each lowercase character of s to its
// uppercase equivalent; all other characters are left unchanged. The
// transformed string is returned to the calling function.
string uppercase(string s) {
	//char currCh;
	
	//read an unknown # of chars from standard input character-by-character
	for(unsigned int i = 0; i < s.size(); i++) {
		//check to see if we are at the beginning of a wordCt
		if((s[i] >= 'a')&&(s[i] <= 'z'))
			s[i] = s[i] - 'a' + 'A'; 
	}
	
	return s;
}