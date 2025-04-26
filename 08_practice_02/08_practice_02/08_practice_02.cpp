#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int CountNumberFreq(int DigitToCheck, int Number)
{
	int Counter = 0;
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder)
		{
			Counter++;
		}

	}

	return Counter;
}


int main()
{
	int Number = ReadPositiveNumber("Enter a positive number: ");
	int DigitToCheck = ReadPositiveNumber("Enter a positive number To Check: ");

	cout << "Digit " << DigitToCheck << " Freq is " << CountNumberFreq(DigitToCheck, Number) << " Times";
	return 0;
}

