#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;

    return RandomNumber;
}

void FillArray(int arr[100], int& arrlenght)
{
    cout << "Enter the length of the array: ";
    cin >> arrlenght;

    for (int i = 0; i < arrlenght; i++)
    {
        arr[i] = RandomNumber(0, 100);
    }

}

void PrintArray(int arr[100], int arrlenght)
{
    for (int i = 0; i < arrlenght; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int SumNumber(int arr[100], int arrLenght)
{
    int Sum = 0;

    for (int i = 0; i < arrLenght; i++)
    {

        Sum += arr[i];

    }

    return  Sum;
}

float AverageNumber(int arr[100], int arrlenght)
{
	return (float)SumNumber(arr, arrlenght) / arrlenght;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlenght;

    FillArray(arr, arrlenght);
    cout << endl;

    cout << "The array is: ";
    PrintArray(arr, arrlenght);
    cout << endl;

    cout << "The average of element in the array is: ";
    cout << AverageNumber(arr, arrlenght) << endl;
    return 0;
}