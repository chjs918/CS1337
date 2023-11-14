// Jisoo Choi
// CS 1337
// Lab 55

#include <lab55.h>

// Function isPalindrome - returns true if string s is an imperfect
// palindrome and false otherwise
bool isPalindrome(string s) {
	s = uppercase(s);
	s = removePunctuation(s);
	s = removeWhitespace(s);
	
	string newS;
	newS = stringReverse(s);
	
	if(s == newS)
		return true;
	else 
		return false;
}