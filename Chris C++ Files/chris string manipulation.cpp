// title: genedetermination.cpp
// name: Chris Dinkelspiel
// date: 
// purpose: to determine if something is a gene

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//displays a found gene
void displayTrue(string& genome, int& lowerb, int& upperb)
{
	for (int y = lowerb + 3; y < upperb; y++)
	{
		cout << genome.at(y);
	}
	cout << endl;
}

//displays that no gene is found
void displayFalse()
{
	cout << "No gene is found." << endl;
}

//returns the number of "ATG" substrings in an array, which is the maximum # of genes in the array (there might be fewer)
int getCounter(string& genome)
{
	int counter = 0;
	bool foundATG = true; //just so the while sequence will execute at least once
	int counterStartIndex = 0; //this is a different startIndex than used in the other function
	while (foundATG == true) //keep going until can't find any more ATG strings
	{
		int indexATG = genome.find("ATG", counterStartIndex);
		if (indexATG > 0) //if we found an "ATG"
		{
			counterStartIndex = counterStartIndex + 2; //Update to start searching after the "ATG"
			counter++; //and update the counter
		}
		else
		{
			foundATG = false; //we're done searching; will cancel the while loop
		}
	}	
	return counter;
}

//finds and displays a gene (if one exists)
bool newGetLowerAndUpper(string& genome, //original genome input
						int& startIndex) //0, or the first index after the last gene found
{

	bool isGene = false;
	int indexATG = genome.find("ATG", startIndex); //index of first letter of next "ATG"
	int upperb = indexATG; //first index of the stop sequence

	if (indexATG > 0) //if an "ATG" is found
	{
	
		int tga = genome.find("TGA", indexATG); //index of first "TGA" substring
		if (tga > 0) //if we actually found a "TGA" substring
		{
			upperb = tga;
		}
		int tag = genome.find("TAG", indexATG); //index of first "TAG" substring
		if (tag > 0 && tag < upperb) //if we found a "TAG" and it comes before any previously found stop sequence
		{
			upperb = tag;
		}
		int taa = genome.find("TAA", indexATG); //index of first "TAA" substring
		if (taa > 0 && taa < upperb) //if we found a "TAA" and it comes before any previously found stop sequence
		{
			upperb = taa;
		}
		if (upperb > indexATG) //if we actually found a gene
		{
			displayTrue(genome, indexATG, upperb);
			startIndex = upperb + 3;
			isGene = true;
		}
		
	}//end if
	
	return isGene;

}// end newGetLowerAndUpper

int main()
{
	string genome;
	cout << "Please enter a genome string: ";
	cin >> genome;
	int startIndex = 0;
	int counter = getCounter(genome);
	bool isGene = false;

	
	for (int i = 0; i <= counter; i++)
	{
		isGene = newGetLowerAndUpper(genome, startIndex);
	}
	
	if (isGene == false)
	{
		displayFalse();
	}


	return 0;
}

