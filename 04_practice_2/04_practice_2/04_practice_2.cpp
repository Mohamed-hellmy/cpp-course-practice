#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool IsPerfect(int Number)
{
	int Sum = 0;

	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}

	return Sum == Number;
}

void PrintPerfectNumberFrom1ToN(int Number)
{
	for (int i = 1; i < Number; i++)
	{
		if (IsPerfect(i))
		{
			cout << i << endl;
		}
	}
}
int main()
{
   PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter A Positive Number: "));
}


