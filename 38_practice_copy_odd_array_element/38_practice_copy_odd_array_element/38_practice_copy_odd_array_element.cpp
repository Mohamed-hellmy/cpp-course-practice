#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}

void CopyOddArrayWithAddArrayElement(int arrsorce[100], int arrDestination[100], int& arrLength, int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arrsorce[i] % 2 != 0)
        {
            AddArrayElement(arrsorce[i], arrDestination, arr2Length);

        }
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arrsorce[100], arrDestination[100], arrLength = 0, arr2Length = 0;

    FillArrayWithRandomNumbers(arrsorce, arrLength);

    CopyOddArrayWithAddArrayElement(arrsorce, arrDestination, arrLength, arr2Length);

    cout << "Original Array: ";
    PrintArray(arrsorce, arrLength);
    cout << endl;

    cout << "Copied Array: ";
    PrintArray(arrDestination, arr2Length);

    return 0;
}
