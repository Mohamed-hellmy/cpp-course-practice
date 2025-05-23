#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;

}

enum enCharType
{
    SmallLetter = 1, CapitalLetter = 2 , SpecialCharcter = 3 , Digit = 4
};

char GetRandomChar(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
		return char(RandomNumber(97, 122));
		break;

	case enCharType::CapitalLetter:
		return char(RandomNumber(65, 90));
		break;

	case enCharType::SpecialCharcter:
		return char(RandomNumber(33, 47));
		break;

	case enCharType::Digit:
		return char(RandomNumber(48, 57));
		break;

	default:
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << GetRandomChar(enCharType::SmallLetter)<< endl;
	cout << GetRandomChar(enCharType::CapitalLetter)<< endl;
	cout << GetRandomChar(enCharType::SpecialCharcter)<< endl;
	cout << GetRandomChar(enCharType::Digit)<< endl;
    
}

