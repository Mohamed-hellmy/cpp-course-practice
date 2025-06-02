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


void CountDigitFrequency(short& DigitToCheck, int arr[100], int arrLength)
{
    int Counter = 0;
    int Index = 0;
 
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] == DigitToCheck)
            {
                Counter++;
                Index = i ;
            }
        }
	cout << "The digit " << DigitToCheck << " appears " << Counter << " times in the array." << endl;
    
    cout << "The last occurrence of the digit " << DigitToCheck << " is at Index: " << Index << endl;

	cout << "The last occurrence of the digit " << DigitToCheck << " is at Position: " << Index +1 << endl;



}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

	short DigitToCheck;

	arrLength = ReadPositiveNumber("Enter the length of the array (max 100):");
	FillArrayWithRandomNumbers(arr, arrLength);
    
    cout << endl;
    cout << "The generated array is: ";
    PrintArray(arr, arrLength);
    cout << endl;

	cout << "Enter Number To Check Frequency: ";
	DigitToCheck = ReadPositiveNumber("Enter a digit to check its frequency in the array:");


	CountDigitFrequency(DigitToCheck, arr, arrLength);

    return 0;
}

