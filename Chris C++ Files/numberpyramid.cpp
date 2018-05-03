#include <iostream>
#include <iomanip> //for the setw stream manipulator
using namespace std;

int main()
{
	cout << left; //left justify all output from here on out
	int N = 0; //total number of lines in the pyramid
	
	while (N <= 0) { //error checking loop
		cout << "Please enter a positive integer: ";
		cin >> N;
	}
	
	for (int lineNum = 1; lineNum <= N; lineNum++) { //goes through the lines
	
		for (int t = 0; t < N - lineNum; t++) //t for tabs: number of tabs to print
			cout << setw(4) << " ";
		
		for (int d = lineNum; d >= 1; d--) //print DESCENDING numbers, from lineNum to 1
			cout << setw(4) << d;
		
		for (int a = 2; a <= lineNum; a++) //print ASCENDING numbers, from 2 to lineNum
			cout << setw(4) << a;
		
		cout << "\n"; //at the end of the big line-tracking loop, start a new line!
		
	} //end outer for loop
	
	return 0;
}