#include <iostream>
#include <cmath>
using namespace std;

void reverse(int num)
{
	cout << "The reversal of " << num << " is: ";
	for (int i = 0; num > pow(10, i); i++)
		cout << num % static_cast<int>(pow(10, i + 1)) / static_cast<int>(pow(10, i));
	cout << endl;
	return;
}

int main ()
{
	cout << "Please enter an integer: ";
	int num;
	cin >> num;
	num = abs(num);
	reverse(num);
	return 0;
}