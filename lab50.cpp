// Jisoo Choi
// CS 1337
// Lab 50

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 50 \n\n";

// return true if ch is a vowel (case insensitive) and false otherwise
bool isVowel(char ch);

// return true if ch is a consonant (case insensitive) and false otherwise
bool isConsonant(char ch);

int main()
{
	string word;
	int wordCt = 0;
	int vowelCt = 0;
	int consoCt = 0;
	int nonalphaCt = 0;
	
	// Output ID line
	cout << ID;
	
	// read an unknown # of words from standard input, word-by-word
	while (cin >> word)
	{
		++wordCt;
		if (isVowel(word.front()))
			++vowelCt;
		if (isConsonant(word.front()))
			++consoCt;
		if(!isVowel(word.front()) && !isConsonant(word.front()))
			++nonalphaCt;
		
	}
	
	cout << "Total Number of Words = " << wordCt << endl;
	cout << "Number of Words Beginning with a Vowel = " << vowelCt << endl;
	cout << "Number of Words Beginning with a Consonant = " << consoCt << endl;
	cout << "Number of Words Beginning with a Non-Alpha = " << nonalphaCt << endl;
	
	return 0;
}

// return true if ch is a vowel (case insensitive) and false otherwise
bool isVowel(char ch)
{
	string vowels("aeiou");
	ch = tolower(ch);
	
	if (vowels.find_first_of(ch) != string::npos)
			return true;
		
	return false;
}

// return true if ch is a consonant (case insensitive) and false otherwise
bool isConsonant(char ch) {
	string consonants("bcdfghjklmnpqrstvwxyz");
	ch = tolower(ch);
	
	if (consonants.find_first_of(ch) != string::npos)
			return true;
		
	return false;
}