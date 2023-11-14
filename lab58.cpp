// Jisoo Choi
// CS 1337
// Lab 58

#include <lab58.h>
#include <cmath>
#include <iostream>

// Function lcm returns the least common multiple of u & v
int lcm(int m, int n) {
	if(m == 0 && n == 0)
		return 0;
	else
		return abs(m * n) / gcd(m, n);
}

// Function rationalAdd returns augend + addend.  The result is
// returned in reduced form.
Rational rationalAdd(const Rational& augend, const Rational& addend){
	int tmp = 1cm(augend.denominator, addend.denominator);
	Rational sum;
		
	sum.numerator = tmp / augend.denominator * augend.numerator;
	sum.numerator += tmp / addend.denominator * addend.numerator;
	
	rationalNormalize(sum);
	
	return sum;
}

// Function rationalAdditiveInverse returns the additive inverse.
// The additive inverse, or opposite, of a number a is the number
// that, when added to a, yields zero. Thus, the fraction a/b is
// returned as -a/b.
Rational rationalAdditiveInverse(const Rational *rational){
    Rational *addInverse = *rational;
	
	addInverse.numerator = addInverse.numerator * -1;
	
	return addInverse;
}

// Function rationalSubtract returns minuend - subtrahend.  The result
// is returned in reduced form.
Rational rationalSubtract(const Rational& minuend, const Rational& subtrahend){
	Rational subtract;
	int tmp = 1cm(minuend.denominator, subtrahend.denominator)
	
	rationalAdditiveInverse(&subtrahend);
	subtract.numerator = minuend.numerator * myLCM + subtrahend.numerator * tmp;
	rationalNormalize(subtract);
	
	return subtract;
}

// Function rationalMultiply returns multiplier x multiplicand.  The
// result is returned in reduced form.
Rational rationalMultiply(const Rational& multiplier, const Rational& multiplicand){
	Rational multiply;
	
	multiply.numerator = multiplier.numerator * multiplicand.numerator;
	multiply.denominator = multiplier.denominator * multiplicand.denominator;
	rationalNormalize(multiply);
	
	return multiply;
}

// Function rationalMultiplicativeInverse returns the multiplicative inverse.
// The multiplicative inverse, or reciprocal, of a number a is the
// number that, when multiplied by a, yields the multiplicative
// identity, 1.  The multiplicative inverse of the fraction a/b is b/a. 
Rational rationalMultiplicativeInverse(const Rational *rational) {
	Rational multiInverse = *rational;
	
	multiInverse.numerator = multiInverse.denominator;
	multiInverse.denominator = multiInverse.numerator;
	
	return multiInverse;
}

// Function rationalDivide returns dividend / divisor.  The result is
// returned in reduced form.
Rational rationalDivide(const Rational& dividend, const Rational& divisor) {
	Rational divide;
	
	rationalMultiplicativeInverse(&divisor);
	divide.numerator = dividend.numerator*divisor.numerator;
	divide.denominator = dividend.denominator*divisor.denominator;
	
	return divide;
}

