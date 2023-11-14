// Jisoo Choi
// CS 1337
// Lab 67

#include <lab67.h>

 bool Rational::equal(const Rational& second) const        // ==
 {  
	/*int factor = lcm(getDenominator(), second.getDenominator());
	int lhsNumerator = factor / getDenominator() * getNumerater();
	int rhsNumerator = factor / second.getDenominator() * second.getNumerater();
	
	return lhsNumerator == rhsNumerator;*/
	return subtract(second).getNumerator() == 0;
 }
 bool Rational::notEqual(const Rational& second) const     // !=
 {
	 return !equal(second);
 }
 bool Rational::lessThan(const Rational& second) const     // <
 {
	 return subtract(second).getNumerator() < 0;
 }
 bool Rational::lessThanOrEqual(const Rational& second) const  // <=
 {
	 return equal(second) || lessThan(second);
 }
 bool Rational::greaterThan(const Rational& second) const  // >
  {
	  return !lessThan(second) && !equal(second);
 }
 bool Rational::greaterThanOrEqual(const Rational& second) const  // >=
  {
	 return !lessThan(second);
 }