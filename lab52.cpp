// Jisoo Choi
// CS 1337
// Lab 52

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// Function removeWhitespace removes all whitespace characters from
// string s. The transformed string is returned to the calling function.
string removeWhitespace(string s) {
	string::iterator i;
	
	for (i = s.begin(); i < s.end(); )
	{
		if (isspace(*i))
			s.erase(i);
		else
			++i;
	}
	
	return s;
}