#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message ;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";  
}

void SumOfTwoArrays(int arr1[100], int arr2[100], int arr3[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
            arr3[i] = arr1[i] + arr2[i];
    }
      
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arr3[100], arrLength;

	arrLength = ReadPositiveNumber("Enter the length of the arrays (max 100): ");

	FillArrayWithRandomNumbers(arr1, arrLength);
	FillArrayWithRandomNumbers(arr2, arrLength);

	cout << "\nFirst array: ";
	PrintArray(arr1, arrLength);

	cout << "\nSecond array: ";
	PrintArray(arr2, arrLength);

    cout << "\nSum of two arrays: ";
	SumOfTwoArrays(arr1, arr2, arr3, arrLength);
    PrintArray(arr3, arrLength);

	return 0;
}

