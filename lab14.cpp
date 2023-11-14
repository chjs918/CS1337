// Jisoo Choi
// CS 1337
// Lab 14

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string ID = "Jisoo Choi - CS 1337 - Lab 14 \n\n";

int main() {
	uint ssn, erea, group, serial;
	
	cout << ID;
	
	cout << "-----------------------" << endl;
	cout << "  Input      Formatted  " << endl;
	cout << "-----------------------" << endl;
	while(cin >> ssn)
	{
		erea = ssn / 1000000;
		group = ssn / 10000 % 100;
		serial = ssn % 10000;
		
		cout << setw(3) << setfill('0') << ssn << "  ";
		
		cout << setw(3) << setfill('0') << erea << "-" << 
		setw(2) << setfill('0') << group << "-" << 
		setw(4) << setfill('0') << serial << endl;
		
	}
	
	cout << "-----------------------" << endl;
	
	return 0;
}
