#include <iostream>
#include "Rational.h"
#include "Rational.cpp"
using namespace std;

void testOutput(Rational* r1, Rational* r2)
{
    //Display r1 and r2 and test toString
    cout << "r1 is " << r1->toString() << endl;
    cout << "r2 is " << r2->toString() << endl;

    //Test add, subtract, multiply, and divide
    cout << r1->toString() << " + " << r2->toString() << " = " << (r1->add(*r2)).toString() << endl;
    cout << r1->toString() << " - " << r2->toString() << " = " << (r1->subtract(*r2)).toString() << endl;
    cout << r1->toString() << " * " << r2->toString() << " = " << (r1->multiply(*r2)).toString() << endl;
    cout << r1->toString() << " / " << r2->toString() << " = " << (r1->divide(*r2)).toString() << endl;

    //Test intValue and double
    cout << "r2.intValue() is " << r2->intValue() << endl; 
    cout << "r2.doubleValue() is " << r2->doubleValue() << endl;

    //Test compareTo and equals
    cout << "r1.compareTo(r2) is " << r1->compareTo(*r2) << endl;
    cout << "r2.compareTo(r1) is " << r2->compareTo(*r1) << endl;
    cout << "r1.compareTo(r1) is " << r1->compareTo(*r1) << endl;
    cout << "r1.equals(r1) is " << (r1->equals(*r1) ? "true" : "false") << endl;
    cout << "r1.equals(r2) is " << (r1->equals(*r2) ? "true" : "false") << endl << endl;
}

int main()
{
    //Create and initialize 2 rational numbers, r1 and r2
    Rational* r1 = new Rational(4, 2);
    Rational* r2 = new Rational(2, 3);
    testOutput(r1, r2);

    //Do the whole thing again, new values:
    Rational* r3 = new Rational(4, 4);
    Rational* r4 = new Rational(7, 2);
    testOutput(r3, r4);

    return 0;
}