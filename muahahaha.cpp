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
	cout << "Wow, " << name << ". " << color << "? Very original." <<
		" Good luck with " << quest << ". *Snicker*\n";
	return 0;
}
