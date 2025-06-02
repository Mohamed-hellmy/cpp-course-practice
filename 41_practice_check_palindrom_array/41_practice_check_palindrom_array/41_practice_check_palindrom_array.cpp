#include <iostream>
using namespace std;

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    arrLength = 6;  // Set the number of elements in the array to 6.

    // Manually assign values to each element in the array.
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
   
}


bool IsPalindromeArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] != arr[arrLength - i - 1])
        {
            return false;
        }
    }
	return true; 
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
    int arrSrc[100], arrSrcLength = 0;

	FillArrayWithRandomNumbers(arrSrc, arrSrcLength);

	cout << "\nthe array is: ";
	PrintArray(arrSrc, arrSrcLength);


    if (IsPalindromeArray(arrSrc, arrSrcLength))
    {
        cout << "\nIs Palindrom" << endl;
    } 
    else 
    {
        cout << "\nNOT Palindrom" << endl;

    }
    return 0;
}

