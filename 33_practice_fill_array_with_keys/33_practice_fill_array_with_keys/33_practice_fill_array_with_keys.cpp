#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;  
}


enum enCharType {
    SamallLetter = 1,   
    CapitalLetter = 2,   
    SpecialCharacter = 3,
    Digit = 4           
};


char GetRandomCharacter(enCharType CharType)
{

    switch (CharType)
    {
    case enCharType::SamallLetter:
    {

        return char(RandomNumber(97, 122));
        break;  
    }
    case enCharType::CapitalLetter:
    {

        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SpecialCharacter:
    {
        
        break;
    }
    case enCharType::Digit:
    {

        return char(RandomNumber(48, 57));
        break;
    }
    }

    return '\0';
}


string GenerateWord(enCharType CharType, short arrLenght)
{
    string Word;  

    for (int i = 1; i <= arrLenght; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey()
{
    string Key = ""; 

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    // Loop from 1 to NumberOfKeys.
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        // Print the current key number and the generated key.
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

void FillArrayWithRandomKeys(string arr[100], int arrLength)
{
    // Fill the array with random numbers between 1 and 100.
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = GenerateKey();
    }
}


void PrintArray(string arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << "Array[ " << i << " ]: " << arr[i] << " " << endl;

    cout << "\n"; 
}



int main()
{
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength;

	arrLength = ReadPositiveNumber("Enter the number of keys to generate (max 100): ");

	cout << "Generating " << arrLength << " keys..." << endl;
	FillArrayWithRandomKeys(arr, arrLength);

	PrintArray(arr, arrLength);

    return 0;
}

