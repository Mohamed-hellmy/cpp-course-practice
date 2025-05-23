#include <iostream>
using namespace std;

void PrintTableHeader()
{
	cout << "\n\n\t\t\t\t Multiplication Table From 1 To 10\n" << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}

	cout << "\n----------------------------------------------------------------------------------\n" << endl;
}

string ColumnSeperator(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintMultipliationTable()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeperator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
}
int main()
{
	PrintMultipliationTable();

	return 0;
}

