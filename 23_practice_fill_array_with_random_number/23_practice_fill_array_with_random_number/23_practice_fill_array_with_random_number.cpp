#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	 int randomNumbe =  rand() % (To - From + 1) + From;
	 return randomNumbe;
}

void FillArray(int arr[100], int& arrlenght)
{
	cout << "Enter the length of the array (max 100): ";
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
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlenght;

	
	FillArray(arr, arrlenght);

	cout << "The array is: ";
	PrintArray(arr, arrlenght);

	return 0;
}

