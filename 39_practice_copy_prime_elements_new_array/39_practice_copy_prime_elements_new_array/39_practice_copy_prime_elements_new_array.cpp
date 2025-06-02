#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    // Generate a random number between 0 and (To - From) using rand(),
    // then add From to shift the range to [From, To].
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  // Return the generated random number.
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the desired number of elements from the user.

    // Fill the array with random numbers between 1 and 100.
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    // Since it's a new element, increase the array length by 1.
    arrLength++;
    // Store the new element at the index corresponding to the updated length (using zero-based indexing).
    arr[arrLength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{

    for (int i = 0; i < arrLength; i++)

        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);

        }
}


void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";  // Print a newline after printing all elements.
}

int main()
{
    srand((unsigned)time(NULL));
    
	int arrSource[100], arrDest[100], arrSourceLenght = 0, arrDestLenght = 0;
	FillArrayWithRandomNumbers(arrSource, arrSourceLenght);

	cout << "\nSource array:\n";
	PrintArray(arrSource, arrSourceLenght);
    cout << endl;

	cout << "\nDestination array:\n";
	CopyArrayUsingAddArrayElement(arrSource, arrDest, arrSourceLenght, arrDestLenght);
	PrintArray(arrDest, arrDestLenght);
    cout << endl;



    return 0;
}

