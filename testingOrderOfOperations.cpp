#include <iostream>
using namespace std;

int main() {

	char c = 'y';

	while (c == 'y' || c == 'Y') { //if c is y or Y, then do the stuff in the loop
		
		/*
		int x = 0, y = 0;
		
		cout << "Please enter values for x and y: ";
		cin >> x >> y;
	
		cout << "To confirm, y = " << y << " and x = " << x << ".\n";
		y = x++;
		cout << "After performing y = x++\n";
		cout << "y = " << y << " and x = " << x << endl;
		*/
		
		//Prompt user to continue
		cout << "Continue? (y/n) ";
		cin >> c;
		
	}
	
	return 0;

}
