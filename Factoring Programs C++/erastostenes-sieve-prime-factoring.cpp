//So this will use Erastosthenes' sieve to test for prime factors more efficiently.
//Okay so the problem with this is that it only finds if, say, 3|n, not how many times.

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int n; //number to be factored
	
	//Prompt the user for n
	cout << "Please enter an integer: ";
	cin >> n;
	
	int truncSqrt = (int)sqrt(n); //square root of n, rounded down
	
	//Probably a better way to do this but to start, let's sieve a big array of ints
	int divisors[n - 1]; //array of all integers from 2 to n
	for (int i = 0; i < n - 1; i++) { 
		divisors[i] = i + 2; 
	}//end for
	
	//Let's set up some variables
	float quotient;
	int primeFactors[n - 1]; //our answers
	int primesFound = 0; //tracks number of primes found (and is index for primeFactors[])

	//Now let's do the testing
	int currentPrimesIndex = 0;
	while (currentPrimesIndex < n - 1) {
	
		quotient = (float)n / (float)divisors[i]; //float typing makes answer a decimal
		
		if (ceilf(quotient) == quotient) { //if quotient is an integer
			primeFactors[primesFound] = divisors[currentPrimesIndex]; //add to answers
			primesFound++;
		}//end if
		
		//The sieve:
		for (int indexToCancel = currentPrimesIndex; indexToCancel < n - 1; 
				indexToCancel += currentPrimesIndex) {
			divisors[indexToCancel] = -1; //set to impossible value
		}//end for
		
		//Find next prime to test
		while (divisors[currentPrimesIndex] == -1 && currentPrimesIndex < n - 1) {
			currentPrimesIndex++;
		}//end while

	}//end while

	//Print output
	cout << "The prime factors that go into " << n << " are:\n";
	for (int i = 0; i < primesFound; i++) {
		cout << divisors[i] << "\t";
	}//end for

	return 0;

}//end main