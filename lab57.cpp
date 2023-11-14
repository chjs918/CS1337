// Jisoo Choi
// CS 1337
// Lab 57

#include <lab57.h>
#include <cmath> 

bool rationalValid(const Rational& rational)
{
	return rational.denominator != 0;
}

// Function rationalNormalize reduces rational to lowest
// terms. Negative rationals should be manipulated so that the
// minus sign goes with the numerator.  Zero is represented by zero
// (0) as the numerator and one (1) as the denominator.
void rationalNormalize(Rational& rational)
{
	int myGCD = gcd(rational.numerator, rational.denominator);
	
	if(rational.denominator < 0)
		myGCD = -myGCD;
	
	rational.numerator = rational.numerator / myGCD;
	rational.denominator = rational.denominator / myGCD;
}

// Function rationalInput initializes rational from input stream in
istream& rationalInput(istream& in, Rational& rational)
{
	in >> rational.numerator;
	in >> rational.denominator;
	return in;
}

// Function rationalOutput writes rational to output stream out in the
// format rational.numerator/rational.denominator
ostream& rationalOutput(ostream& out, const Rational& rational)
{
	out << rational.numerator;
	out << '/';
	out << rational.denominator;
	return out;
}

// Function gcd returns the greatest common divisor of u & v
int gcd(int u, int v)
{
	if(u == 0)
			return abs(v);
		else if (v == 0)
			return abs(u);
		else //use Euclid Alg
		{
			u = abs(u);
			v = abs(v);
			int rem = u % v;
			
			while (rem != 0)
			{
				u = v;
				v = rem;
				rem = u % v;
			}
			
			return v;
		}
}