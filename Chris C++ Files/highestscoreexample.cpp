//Example Program using While Loop
//Loosely based on exercise 5.10 from the book
//By: Allie Mages
//Date: 2/23/18

#include <iostream>
using namespace std;

int main() 
{
	cout << "Please enter a series of scores. When finished entering scores, " <<
			"enter a negative number and hit return: ";
	
	//Our goal is to find the highest score. Because we're NOT going to be storing the 
	//value of each score, we need to determine if it's the highest so far BEFORE the
	//next value is entered. So the only numbers I'm going to declare are these:
	double currentHighestScore = 0; //contains the highest score yet found
	double scoreEntered = 0; //the score just entered
	int numberOfScoresEntered = 0; //tracks number of scores entered
	
	//Keep processing scores until they enter a negative number:
	while (scoreEntered >= 0) 
	{
		cin >> scoreEntered;
		numberOfScoresEntered++;
		if (scoreEntered > currentHighestScore)
			currentHighestScore = scoreEntered; //if the new score that was just entered
												//is higher than our previous highest,
												//then replace currentHighestScore with
												//the new highest value.
	} //end while
	
	cout << "You entered " << numberOfScoresEntered << " scores. The highest " <<
			"score you entered was " << currentHighestScore << ".\n";
	return 0;
}