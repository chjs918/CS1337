// Jisoo Choi
// CS 1337
// Lab 66

#include <lab66.h>
#include <cmath>
#include <iostream>


Rational Rational::add(const Rational& addend) const      // addition
{
	Rational sum;
	
	int factor = lcm (getDenominator(), addend.getDenominator());
	//factor = lcm((*this).getDenominator(), addend.getDenominator());
	//factor = lcm(this->getDenominator(), addend.getDenominator());
	
	sum.setNumerator(factor / getDenominator() * getNumerator());
	sum.setNumerator(sum.getNumerator() + factor / addend.getDenominator() * addend.getNumerator());
	sum.setDenominator(factor);
	
	sum.reduce();
	
	return sum;
}
	
Rational Rational::additiveInverse() const                // given a/b, returns -a/b
{
	Rational addInv(getNumerator() * -1, getDenominator());
	return addInv;
}

Rational Rational::subtract(const Rational& subtrahend) const  // subtraction
{
	return add(subtrahend.additiveInverse());
	/*Rational rat = subtrahend.additiveInverse();
	
	return rat;*/
}

Rational Rational::multiply(const Rational& multiplicand) const  // multiplication
{
	Rational product (getNumerator() * multiplicand.getNumerator()
						,getDenominator() * multiplicand.getDenominator());
	
	product.reduce();
	
	return product;
}

Rational Rational::multiplicativeInverse() const          // given a/b, returns b/a
{
	Rational multiInverse (getDenominator(), getNumerator());
	
	return multiInverse;
}
Rational Rational::divide(const Rational& divisor) const { // division 
	Rational divide(getNumerator() * divisor.multiplicativeInverse().getNumerator(), getDenominator() * divisor.multiplicativeInverse().getDenominator());
	divide.reduce();
	
	return divide;
}
ostream& Rational::print(ostream& os) const {              // print Rational to output
	os << getNumerator() << '/' << getDenominator();
	return os;
}                        //   stream os
istream& Rational::read(istream& is)  {                    // read Rational from input
   int num, denom;
	
	if(is >> num >> denom){
		setNumerator(num);
		setDenominator(denom);
	}
	else {
		setNumerator(0);
		setDenominator(1);
	}
	
	return is;
}	//   stream is
int 	 Rational::lcm(int m, int n) const
{
	if(m == 0 && n == 0)
		return 0;
	else
		return abs(m * n) / gcd(m, n);
}

