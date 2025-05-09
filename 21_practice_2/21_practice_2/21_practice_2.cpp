#include <iostream>
#include <string>

using namespace std;

enum enCharType {SmallLetter = 1, CapitalLetter = 2, 	SpecialCharcter = 3, Digit = 4};


int ReadPositiveNumber(string Message)
{
	int Number;
	cout << Message;
	cin >> Number;
	return Number;
}


int RandomNumber(int min, int max)
{
	int RandNum;

	RandNum = rand() % (max - min + 1) + min;

	return RandNum;
}


char GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
	case SmallLetter:
		return (char)RandomNumber(97, 122); // a-z
		break;
	case CapitalLetter:
		return (char)RandomNumber(65, 90); // A-Z
		break;
	case SpecialCharcter:
		return (char)RandomNumber(33, 47); // !-/
	case Digit:
		return (char)RandomNumber(48, 57); // 0-9
		break;
	}
}


string GetRandomWord(enCharType CharType, short Lenght )
{
	string word = "";

	for (int i = 1; i <= Lenght; i++)
	{
		word = word + GetRandomChar(CharType);
	}
	return word;
}

string GetRandomKey()
{
	string key = "";

	key = key + GetRandomWord(CapitalLetter, 4) + " _ "+
		        GetRandomWord(CapitalLetter, 4) + " _ "
		      + GetRandomWord(CapitalLetter, 4) + " _ "
	       	  + GetRandomWord(CapitalLetter, 4);

	return key;
}


void GetRandomKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "]" << " : ";
		cout << GetRandomKey() << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	GetRandomKeys(ReadPositiveNumber("Enter the number of keys you want to generate: "));
}

