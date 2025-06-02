#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message << endl;
    cin >> Number;
   

    return Number;
}

float MyAbs(float Number)
{
    if (Number > 0)
    {
        return Number;

    }
    else
    {
        return (Number * -1);

    }
}


int main()
{
    float Number = ReadNumber("Enter Negative Number: ");

    cout << "The Number With ABS: " << MyAbs(Number) << endl;

    cout << "The Number With C++: " << abs(Number)<< endl;

    return 0;
}

