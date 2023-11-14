// Jisoo Choi
// CS 1337
// Lab 68

#include <iostream>
#include <lab67.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

void swap(Rational &r1, Rational &r2)
{
	Rational temp = r1;
	r1 = r2;
	r2 = temp;
}

// Function sort - sorts the n-element array of Rationals in
// ascending order using an exchange sort
void sort(Rational array[], int n) {
	Rational *outer, *inner;
	for(outer = array;outer < array + (n - 1);outer++)
	{
		for(inner = outer + 1; inner < array + n;inner++)
		{
			if(*outer->greaterThan(*inner))
				swap(*outer,*inner);
		}
	}
}

// Function writeArray - writes the n-element array of Rationals to
// output stream out, each element on a separate line
ostream& writeArray(ostream& out, const Rational array[], int n){
    const Rational *i;
	out << "array\n{\n";
	for(i = array;i < array + n;i++)
	{
		out << "  [" << setw(2) << i - array << "] = " ;
		rationalOutput(out, *i);	
		out << endl;
	}
	out << "}\n";
	return out;
}

