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

int CountNumberFreq(short DigitToCheck , int Number)
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

void PrintNumberFreq(int Number)
{
	cout << endl;

	for(int i = 0 ; i < 10 ; i++)
	{
		short DigitFreq = 0;
		DigitFreq = CountNumberFreq(i, Number);

		if (DigitFreq > 0)
		{
			cout << "Digit " << i << " Freq is " << DigitFreq << " Times\n";
		}
	}

}
int main()
{
	PrintNumberFreq(ReadPositiveNumber("Enter a positive number: "));


    return 0;
}

