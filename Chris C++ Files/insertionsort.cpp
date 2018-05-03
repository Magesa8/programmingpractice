#include <iostream>
using namespace std;

int main() 
{	
	//Prompt the user for a size and declare the array using that size, cast as const int
	cout << "How many numbers would you like to enter? ";
	int size;
	cin >> size;
	double myArray[static_cast<const int>(size)];
	
	//Prompt the user to fill the array with numbers
	cout << "Please enter " << size << " numbers: ";
	
	//Fill the array using a for loop
	for (int i = 0; i < size; i++)
		cin >> myArray[i];
	
	//The outer loop tracks iterations of the loop: we always start with the first
	//unsorted element and search all previous elements to see where we should insert it.
	for (int firstUnsorted = 1; firstUnsorted < size; firstUnsorted++)
	{
		//Search the sorted array at indices below firstUnsorted to see where the value
		//at firstUnsorted should be inserted.
		for (int currentIndex = 0; currentIndex < firstUnsorted; currentIndex++)
		{
			//If the value myArray[firstUnsorted] belongs at the currentIndex, then
			if (myArray[firstUnsorted] < myArray[currentIndex])
			{
				//Store the value at firstUnsorted in temp b/c we're about to overwrite it
				double temp = myArray[firstUnsorted];
				
				//Shift all values in the array up one index
				for (int i = firstUnsorted - 1; i >= currentIndex; i--)
					myArray[i + 1] = myArray[i];
				
				//put the stored firstUnsorted value in the array at the currentIndex.
				myArray[currentIndex] = temp;
			}//end if
		}//end inner for loop
	}//end outer for loop
	
	//Display the sorted array
	for (int i = 0; i < size; i++)
		cout << myArray[i] << " ";
	cout << endl;
	
	return 0;
}//end main function