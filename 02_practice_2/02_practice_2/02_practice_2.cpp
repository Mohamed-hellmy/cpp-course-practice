#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 0};

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


enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);  

    for (int Counter = 2; Counter < M; Counter++)
    {
		if (Number % Counter == 0 )
		{
			return enPrimeNotPrime::NotPrime;
		}
    }
    return enPrimeNotPrime::Prime;

}


void PrintPrimeNumberFrom1ToN(int Number)
{
    cout << "\n";

	cout << "The Prime Numbers From 1 To " << Number << " Are: " << endl;

    for (int i = 0; i < Number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please Enter A Positive Number: "));
    return 0;
}

