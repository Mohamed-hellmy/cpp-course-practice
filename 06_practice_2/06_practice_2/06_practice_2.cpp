#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;

	do 
	{
		cout << Message;
		cin >> Number;

	}while (Number < 0);

	return Number;
}

int SumDigits(int Number)
{
	int Sum = 0;
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
	}
	return Sum;
}
int main()
{
	int Result = SumDigits(ReadPositiveNumber("Enter A Positive Number: "));
	cout << "The Sum Is: " << Result;
}

