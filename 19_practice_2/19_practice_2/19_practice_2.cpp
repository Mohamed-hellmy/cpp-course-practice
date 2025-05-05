#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;

}

int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumber(1, 20) << endl;
	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 10) << endl;

}

