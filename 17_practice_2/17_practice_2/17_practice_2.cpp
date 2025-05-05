#include <iostream>
#include <string>

using namespace std;

string ReadPassword(string Message)
{
	string password = "";

	cout << Message ;
    cin >> password;

	return password;
}

bool GuessPassword(string originalPassword)
{
    string word = "";
	int counter = 0;

    for (int i = 65; i <= 90; i++)
    {

        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

				if (word == originalPassword)
				{
					cout << "Password found: " << word << endl;
					cout << "Number of attempts: " << counter << endl;
					return true;
				}
                else
                {

                }
                cout << word << endl;

                word = "";
            }
        }

        cout << "\n";
    }
}


int main()
{
	GuessPassword(ReadPassword("Enter your 3 letter password: "));

}


