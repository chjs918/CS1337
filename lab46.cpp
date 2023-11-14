// Jisoo Choi
// CS 1337
// Lab 46

#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 46 \n\n";

int main() {
	cout << ID;
	char ch;
	int cnt = 0;
	bool lineFinished = true;
	
	while(cin.get(ch)) {
		if(lineFinished) {
			cnt++;
			cout << setfill(' ') << setw(4) << cnt << ":  ";
		}
		if(ch == '\n') 
			lineFinished = true;
		else
			lineFinished = false;
		
		cout << ch;
	}
	return 0;
}
