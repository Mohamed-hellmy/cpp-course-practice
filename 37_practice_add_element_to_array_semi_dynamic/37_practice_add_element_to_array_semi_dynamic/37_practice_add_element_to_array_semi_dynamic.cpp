#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number = 0;
    do
    {
        cout << "Please Enter A Number: ";
        cin >> Number;

    } while (Number <= 0);

    return Number;
}


void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;

}


void InputUserNumbersInArray(int arr[100], int& arryLength)
{
    bool AddMore = true;

    do
    {
        AddArrayElement(ReadPositiveNumber(), arr, arryLength);

        cout << "Do You Want To Add Another Number? [0]:No, [1]:Yes?";
		cin >> AddMore;

    } while (AddMore);
    

}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
}



int main()
{
    int arr[100], arrLength = 0;
    InputUserNumbersInArray(arr, arrLength);

	cout << "Array Length: " << arrLength << "\n";
	cout << "Array Elements: ";
	PrintArray(arr, arrLength);

    return 0;
}
 