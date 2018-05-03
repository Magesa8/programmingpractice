#include <iostream>
using namespace std;

int main() 
{
	cout << "Please enter a series of numbers separated by spaces: ";
	int runningSum = 0;
	int numbersEntered = 0;
	int num;
	cin >> num;
	while (num != 0) {
		runningSum += num;
		numbersEntered++;
		cin >> num;
	}
	cout << "\nYou entered " << numbersEntered << " numbers, which sum to " 
			<< runningSum << ".\n";
}