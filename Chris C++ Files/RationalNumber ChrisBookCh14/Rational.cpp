#include "Rational.h"
#include <sstream> //used in toString to convert numbers to strings
#include <cstdlib> //for the abs function

Rational::Rational()
{
    numerator = 0;
    denominator = 1; //can never = 0
}

Rational::Rational(int numerator, int denominator)
{
    //simplify the fraction
    int factor = gcd(numerator, denominator);
    //always store valence in the numerator
    this->numerator = ((denominator > 0) ? 1 : -1) * numerator / factor;
    this->denominator = abs(denominator) / factor;
}

int Rational::getNumerator() const
{
    return numerator;
}

int Rational::getDenominator() const
{
    return denominator;
}

//Find GCD of two numbers
int Rational::gcd(int n, int d)
{
    //uses Euclidean algorithm
    int n1 = abs(n);
    int n2 = abs(d);
    int gcd = 1;

    for (int k = 1; k <= n1 && k <= n2; k++)
    {
        if (n1 % k == 0 && n2 % k == 0)
            gcd = k;
    }

    return gcd;
}

//Add: a/b + c/d = (ad + bc)/bd. 
//Then simplify (done in the constructor)
Rational Rational::add(const Rational& secondRational) const
{
    int n = numerator * secondRational.getDenominator() 
            + denominator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

//Subtract: As add, but with a minus
Rational Rational::subtract(const Rational& secondRational) const
{
    int n = numerator * secondRational.getDenominator() 
            - denominator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

//Multiply: a/b * c/d = (a * c)/(b * d)
Rational Rational::multiply(const Rational& secondRational) const
{
    int n = numerator * secondRational.getNumerator();
    int d = denominator * secondRational.getDenominator();
    return Rational(n, d);
}

//Divide: (a/b) / (c/d) = (a * d) / (b * c)
//if c != 0: TODO here, wasn't any error checking in book code
Rational Rational::divide(const Rational& secondRational) const
{
    int n = numerator * secondRational.getDenominator();
    int d = denominator * secondRational.getNumerator();
    return Rational(n, d);
}

int Rational::compareTo(const Rational& secondRational) const 
{
    Rational theDifference = subtract(secondRational);
    if (theDifference.getNumerator() < 0)
        return -1;
    else if (theDifference.getNumerator() == 0)
        return 0;
    else
        return 1;
}

bool Rational::equals(const Rational& secondRational) const
{
    if (compareTo(secondRational) == 0)
        return true;
    return false;
}

int Rational::intValue() const 
{
    return getNumerator() / getDenominator();
}

double Rational::doubleValue() const
{
    return 1.0 * getNumerator() / getDenominator();
}

//See Section 10.2.11 for what the heck's up with this
string Rational::toString() const
{
    //stringsteam allows the manipulation of strings as if they were iostreams.
    //can be used to perform a conversion of ints or floats to strings
    //(also good for extracting words by spaces, exactly as you would for an fstream)
    stringstream ss;
    ss << numerator;

    if (denominator > 1)
        ss << "/" << denominator;
    
    return ss.str();
}
