#include <iostream>
using namespace std;

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

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (From - To + 1) + From;

	return RandomNumber;
}

void FillArray(int arr[100], int& arrlenght)
{
	cout << "Enter the number of elements in the array: ";
	cin >> arrlenght;
	cout << endl;

	for (int i = 0; i < arrlenght; i++)
	{
		arr[i] = RandomNumber(0, 100);
	}

}

void CopyOnlyPrimeNumber(int arrsource[100], int arrdestination[100], int arrlenght, int& arrlenght2)
{
	int counter = 0;	

	for (int i = 0; i < arrlenght; i++)
	{
		if(CheckPrime(arrsource[i]) == enPrimNotPrime::Prime)
		{
			arrdestination[counter] = arrsource[i];
			counter++;
		}

	}

	arrlenght2 = -- counter;
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
	int arr[100], arrlenght;

	FillArray(arr, arrlenght);

	int arr2[100]; int arrlenght2 = 0;

	CopyOnlyPrimeNumber(arr, arr2, arrlenght, arrlenght2);

	cout << "The source array is: ";
	PrintArray(arr, arrlenght);
	cout << endl;

	cout << "The destination array with only prime numbers is: ";
	PrintArray(arr2, arrlenght2);
	cout << endl;

   
}

