// Jisoo Choi
// CS 1337
// Lab 56

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

bool passwordVerifier(string password) {
	bool oneUpper, oneLower, oneDigit;
	
	oneUpper = false;
	oneLower = false;
	oneDigit = false;
	
	int size = password.length();
	
	for(int i = 0; i < size ; i++) {
		if(isupper(password[i]))
			oneUpper = true;
		if(islower(password[i]))
			oneLower = true;
		if(isdigit(password[i]))
			oneDigit = true;
	}
	
	if ( size >= 6 && oneDigit && oneLower && oneUpper)
		return true;
	
	return false;
}
