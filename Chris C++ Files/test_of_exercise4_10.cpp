#include <iostream>
using namespace std;

int main()
{
	char x = 'a';
	char y = 'c';
	
	//cout << ++x << endl;
	//cout << x + 1 << endl;
	//x = x + 1;
	//cout << x << endl;
	//cout << y++ << endl;
	//cout << y + 1 << endl;
	//y = y + 1;
	//cout << y << endl;
	
	cout << (x = x + 1) << endl;
	cout << (y = y + 1) << endl;
	cout << (x - y) << endl;
	
	return 0;
}