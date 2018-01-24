#include <iostream>
using namespace std;

int main() {

	cout << "What is your name?\n";
	string name;
	cin >> name;
	cout << "What is your quest?\n";
	string quest;
	cin >> quest;
	cout << "What is your favorite color?\n";
	string color;
	cin >> color;
	cout << "Wow, " << name << ". " << color << "? How original. " <<
		"I can see you'll have LOTS of luck with that quest.\n";
	return 0;
}
