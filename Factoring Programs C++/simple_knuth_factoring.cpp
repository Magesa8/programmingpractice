#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//FRONT MATTER
	
	//Prompt the user for an integer, N, to factor.
	cout << "Please enter a positive integer: ";
	long N;
	cin >> N;

	//Declare and initialize variables
	long n = N; //number being factored at any given moment
	long d = 2; //divisor being tested at any given moment
	long s = (long)sqrt(n); //truncated square root of n at any given moment
	
	//Declare array for the prime factors
	long primeFactors[s]; //array of found prime factors (can't be > the square root)
	long factorsFound = 0; //running total of # of prime factors found
	
	
	//BODY OF PROGRAM
	
	while (n > 1) { //n will gradually decrease as we take factors out of it:
					//when it's 1 we're done.

		if (n%d == 0) { //if d divides n with no remainder
		
			//add d to primeFactors[] and make the quotient the new n
			primeFactors[factorsFound] = d;
			factorsFound++;
			n = n/d;
			s = (long)sqrt(n);
			
		} else if (d > s) { //if no prime divisor <= n's sqrt divides n, then n is prime

			//so add n to primeFactors[] and we're done! 
			primeFactors[factorsFound] = n;
			factorsFound++;
			n = 1; //making n = 1 stops the loop
		
		} else { //if we're not done testing divisors

			//increase d to the next possible factor
			if (d == 2) {
				d++; //if you just tested 2, then test 3 next
			} else {
				d += 2; //after testing 3, add by 2's to skip even numbers
			}//end else
		
		}//end else
	
	}//end while


	//END MATTER
	
	//Check and output result
	cout << "The prime factorization found was:\n";
	long p = 1; //p is the product of the prime factors; should equal N when loop ends
	
	for (long i = 0; i < factorsFound; i++) {
		cout << primeFactors[i] << "\t"; //output factor
		p = p * primeFactors[i]; //include factor in total product
	}//end for
	
	if (p == N) { //if prime factorization multiplies to N like it should
		cout << "\nThe prime factorization was successful!\n";
	} else {
		cout << "\nOh no! The prime factorization wasn't successful.\n";
	}//end else
	
	return 0;
	
}//end main