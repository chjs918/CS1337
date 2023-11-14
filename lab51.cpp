// Jisoo Choi
// CS 1337
// Lab 51

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function removePunctuation removes all punctuation characters from
// string s. The transformed string is returned to the calling function.
string removePunctuation(string s) {
	string::iterator i;
	
	for (i = s.begin(); i < s.end(); )
	{
		if (ispunct(*i))
			s.erase(i);
		else
			++i;
	}
	
	return s;
}