#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
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


void CopyReversedArray(int arr[100], int reversedArr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        reversedArr[i] = arr[arrLength - 1 - i];

    /*int j = 0;
    for (int i = arrLength - 1; i >= 0; i--)
    {
          reversedArr[j] = arr[i]  ;
          j++;
    }*/
}





int main()
{
    int arr[100], arrRevrsed[100], arrLength;

	arrLength = ReadPositiveNumber("Enter the length of the array (max 100): ");

    FillArrayWithRandomNumbers(arr, arrLength);

	cout << "Original array: ";
	PrintArray(arr, arrLength);

    cout << endl;

	cout << "Reversed array: ";
	CopyReversedArray(arr, arrRevrsed, arrLength);
	PrintArray(arrRevrsed, arrLength);


    return 0;
}


