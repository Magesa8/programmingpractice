# include <iostream>
using namespace std;

int main() {
	
	string inputCompany = "";
	cout << "Please enter your least favorite video game company: ";
	getline(cin, inputCompany);
	cout << inputCompany << " is the best video game company that ever existed!\n";
	
	string inputVideoGame = "";
	cout << "Please enter your favorite video game: ";
	getline(cin, inputVideoGame);
	cout << inputVideoGame << " is the worst video game ever!\n";
	
	return 0;
}