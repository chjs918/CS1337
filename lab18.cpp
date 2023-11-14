// Jisoo Choi
// CS 1337
// Lab 18

#include <iostream>
#include <cstdlib>

using namespace std;

// Function reverseInt returns an integer whose digits are in the
// reverse order of num.  For example, if num is 1234, the returned
// integer would be 4321.
unsigned int reverseInt(unsigned int num) {
		uint digit, reverse = 0;
	
	while(num != 0) {
		//step 1: calculate the rightmost digit of num
		digit = num % 10;
		
		//step 2: incorporate digit within reverse
		reverse = reverse * 10 + digit;
		
		//step 3: eliminate the rightmost digit from num
		num = num / 10;
	}
	
	return reverse;
}

// Function generateSequence receives num (the first term in a
// sequence) and an output stream out. The function computes
// additional terms in the sequence and writes them to out. After the
// initial term, subsequent terms are computed by inverting the order
// of the decimal digits in (num + 4).  For example, if num is 4, the
// sequence generated is 4, 8, 21, 52, 65, 96, 1, 5, 9, 31, 53, 75,
// 97, 101, 501, ... The function returns which element in the
// sequence equals 1.  In the example given here, the return value is
// 6.
unsigned int generateSequence(unsigned int num, ostream& out) {
	uint k = 0;
	
	out << num;
	
	while(num != 1) {
		out << ", ";
		num = num + 4;
		num = reverseInt(num);
		++k;
		out << num;
	}
	
	out << endl;
	
	return k;
}