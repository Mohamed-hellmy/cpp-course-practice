#include <iostream>
#include <string>

using namespace std;

string ReadMessage()
{
	string Message;

	cout << "Enter A Message: ";
	getline(cin, Message);

	return Message;
}

string IncText(string Text, short DecKey)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + DecKey);
	}

	return Text;
}


string DecText(string Text, short DecKey)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - DecKey);
	}

	return Text;
}

int main()
{
	string Text = ReadMessage();
	string EncryptedText = IncText(Text, 10);
	string DecryptedText = DecText(EncryptedText, 10);

	cout << "Text is: " << Text << endl;
	cout << "Encrypted Text: " << EncryptedText << endl;
	cout << "Decrypted Text: " << DecryptedText << endl;
}