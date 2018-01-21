//This prime factoring program works but it's recursive and probably not totally efficient
//Also I just used a predefined list of primes and only went up to 97. But the primes list
//could fairly easily be extended, including in the Knuth method of listing a bunch of
//integers but excluding evens after 2, then adding 2 and 4 alternately to skip multiples
//of three, and using mods to avoid multiples of 5 and 7 and so on.

#include <iostream>
#include <math.h>
using namespace std;

int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 
					67, 71, 73, 79, 83, 89, 97};

void recursive(int n) {

	//find the square root of n because you only have to test up to there
	int truncSqrt = trunc((int)sqrt(n)); //truncated sqrt of n
	
	//Find out if n is divisible by each of the primes in turn, starting with 2
	int i = 0; //index for primes array
	bool lookingForFactor = true; //is false when find the first prime that divides n
	while (primes[i] <= truncSqrt && i < 25 && lookingForFactor) {
		float factor = (float)n / (float)primes[i]; //float typing needed to get decimal
		if (ceilf(factor) == factor) { //if "factor" is in fact an integer
			lookingForFactor = false;
			if (factor > 1) { //1 doesn't go in a prime factorization
				cout << primes[i] << "\t";
				recursive(factor); //now find prime factorization of smaller number
			}//if n > 1
		}//if quotient is an integer
		i++;
	}//while
	
	//If n was prime then we output n, instead of outputting one of its factors
	if (primes[i] >= truncSqrt && lookingForFactor) { //if n is prime
		cout << n << "\t";
	}//if
	
	return;
}//recursive function

int main() {
	int n;
	cout << "Please enter an integer: ";
	cin >> n;
	cout << "The prime factors of " << n << " are:\n";
	recursive(n);
	cout << "\n";
	return 0;
}//main