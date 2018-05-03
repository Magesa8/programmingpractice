#include <iostream>
using namespace std;

int main()
{
	boolean keepRunning = true;
	while (keepRunning) {
		float input = 0;
		cout << "Enter a number: ";
		cin >> input;
		if (input > 0) {
			cout << "The number " << input << " is positive.\n";
		} else if (input == 0) {
			cout << "The number " << input << " is neither positive nor negative.\n";
		} else {
			cout << "The number " << input << " is negative.\n";
		}
		cout << "Would you like to try another number? (y/n): ";
		char input = '';
		cin >> input;
		if (input != 'y') {
			keepRunning = false;
		}
	}//end while
	
	return 0;
}