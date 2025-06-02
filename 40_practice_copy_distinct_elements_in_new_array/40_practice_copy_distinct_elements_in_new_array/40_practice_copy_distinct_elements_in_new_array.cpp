#include <iostream>
using namespace std;

void FillArrayWithRandom(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> arr[i];
	}

}


short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	// Loop through the array to check for the number.
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;  // Return the index if the number is found.
	}
	// If the loop completes, the number was not found.
	return -1;
}


bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	// Use FindNumberPositionInArray and check if the result is not -1.
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	// Since it's a new element, increase the array length by 1.
	arrLength++;
	// Store the new element at the index corresponding to the updated length (using zero-based indexing).
	arr[arrLength - 1] = Number;
}

void CopyDistinctNumberToArray(int arrSrc[100], int arrDest[100], int& arrDestLength, int arrSrcLength)
{
	for (int i = 0; i < arrSrcLength; i++)
	{
		if (!IsNumberInArray(arrSrc[i], arrDest, arrDestLength))
		{
			AddArrayElement(arrSrc[i], arrDest, arrDestLength);
		}

	}
	
}

void PrintArray(int arr[100], int arrLength)
{
	// Loop through the array and print each element followed by a space.
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";

}


int main()
{
    int arrSrc[100], arrDest[100], arrSrcLenght = 0, arrDestLenght = 0;

	FillArrayWithRandom(arrSrc, arrSrcLenght);

	cout << "\nSource array:\n";
	PrintArray(arrSrc, arrSrcLenght);

	cout << "\nCopying distinct elements to new array...\n";
	CopyDistinctNumberToArray(arrSrc, arrDest, arrDestLenght, arrSrcLenght);
	PrintArray(arrDest, arrDestLenght);

    return 0;
}

