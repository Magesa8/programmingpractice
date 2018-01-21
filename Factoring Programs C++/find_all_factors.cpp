//Finds and lists all factors of n as an ordered pair.
//Does NOT find the prime factorization.

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	//Very inefficient but simple.
	//An even simpler version would have no left and righthand.
	
	//Prompt the user for an integer, n, to factor.
	cout << "Please enter a positive integer: ";
	int n;
	cin >> n;
	
	//Set up some variables
	int truncSqrt = (int)sqrt(n); //truncated square root of n
	int leftHandFactors[truncSqrt]; //array of all factors <= truncSqrt
	int rightHandFactors[truncSqrt]; //array of all factors >= truncSqrt
	int firstOpenSpace = 0; //index for the first open space in each factors array
	float quotient; //quotient = n/divisor. Only an int if divisor|n.
	
	//Test potential divisors for divisibility until you hit the square root
	
	//We don't need to test 1 since there's always a ( 1, n ) pair.
	leftHandFactors[firstOpenSpace] = 1;
	rightHandFactors[firstOpenSpace] = n;
	firstOpenSpace++;
	
	//So starting with 2 we'll test all integers (divisors) <= the square root
	for (int divisor = 2; divisor <= truncSqrt; divisor++) { 
	
		quotient = (float)n / (float)divisor; 	//float typecasting makes sure answer
												//retains any decimal

	 	if (ceilf(quotient) == quotient) { //if quotient is an int, we found a factor pair
	 		leftHandFactors[firstOpenSpace] = divisor;
	 		rightHandFactors[firstOpenSpace] = quotient;
	 		firstOpenSpace++;
	 	}//end if
	 	
	}//end for
	
	//Output the results
	cout << "The factors of " << n << " are:\n";
	for (int i = 0; i < firstOpenSpace; i++) {
		cout << "( " << leftHandFactors[i] << ", " << rightHandFactors[i] << " )\n";
	}//end for
	
	return 0;
	
}//end main