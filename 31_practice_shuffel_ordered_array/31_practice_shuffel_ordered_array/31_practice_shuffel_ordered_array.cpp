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


void SwapNumber(int& A, int& B)
{
    int Temp;
	Temp = A;  
    A = B;   
	B = Temp;
}


void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter array elements: \n";

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";  
        cin >> arr[i];                          
    }
    cout << endl; 
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        SwapNumber(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrshuffled[100], arrLength;

	arrLength = ReadPositiveNumber("Enter the number of elements in the array (max 100): ");

    ReadArray(arr, arrLength);

    cout << "Array Before Shuffle: ";
    PrintArray(arr, arrLength);
	cout << endl;   

    ShuffleArray(arr, arrLength);
	cout << "Shuffled array: ";
	PrintArray(arr, arrLength);


}

