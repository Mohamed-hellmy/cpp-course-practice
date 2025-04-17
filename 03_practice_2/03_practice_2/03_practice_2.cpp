#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

bool CheckPerfect(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}

	return Number == Sum;
}

void PrintPerfectNumber(int Number)
{
	if (CheckPerfect(Number))
	{
		cout << Number << " is a perfect number." << endl;
	}
	else
	{
		cout << Number << " is not a perfect number." << endl;
	}
}

int main()
{
    PrintPerfectNumber(ReadPositiveNumber("Please Enter Positive Number: "));
    return 0;
}

