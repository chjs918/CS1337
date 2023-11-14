// Jisoo Choi
// CS 1337
// Lab 64

#include <lab64.h>
#include <cmath>
#include <algorithm>

Rational::Rational() : Rational(0,1)                           // default constructor
{
}

Rational::Rational(int num, int denom)         // additional constructor
{
	setNumerator(num);
	setDenominator(denom);
}
void Rational::setNumerator(int num)           // set numerator to num
{
	numerator = num;
}

void Rational::setDenominator(int denom)       // set denominator to denom
{
	denominator = (denom == 0) ? 1 : denom;
}

int  Rational::getNumerator() const           // return numerator
{
	return numerator;
}

int  Rational::getDenominator() const          // return denominator
{
	return denominator;
}

void Rational::reduce()                        // reduce to lowest terms and
{
	int factor = gcd(getNumerator(), getDenominator());
	
	if(getDenominator() < 0)
		factor = -factor;
	
	setNumerator(getNumerator() / factor);
	setDenominator(getDenominator() / factor);
}

int Rational::gcd(int u, int v) const          // returns the gcd of u and v
{
	if(u == 0)
		return abs(v);
	else if(v == 0)
		return abs(u);
	else{
		u = abs(u);
		v = abs(v);
		int factor = min(u,v);
		
		while(u % factor != 0 || v % factor != 0) {
			--factor;
		}
		
		return factor;
	}
}
