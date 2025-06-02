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


void CopyArray(int arrsource[100], int arrdestination[100], int arrlenght)
{
    for (int i = 0; i < arrlenght; i++)
    {
		 arrdestination[i] = arrsource[i]  ;
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrlenght;

    FillArray(arr, arrlenght);
    cout << endl;

	int arr2[100];
	CopyArray(arr, arr2, arrlenght);

    cout << "The original array is: ";
    PrintArray(arr, arrlenght);
     
	cout << endl;

	cout << "The copied array is: ";
	PrintArray(arr2, arrlenght);

    cout << endl;

    
    
    return 0;
}