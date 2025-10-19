#include <iostream>
using namespace std;

int main()
{
	/*int numberOfRows;
	cin >> numberOfRows;
	string star = "*";
		string result;
	for (int numberOfStars = 0; numberOfStars < numberOfRows; numberOfStars++)
	{

		int i = 0;
		do
		{

			i++;
			result = star + result;

		} while (i < numberOfStars);

		cout << result << "|" << result << endl;
	}*/
	int numberOfRows;
	cin >> numberOfRows;
	int numberOfSpaces;
	numberOfSpaces = numberOfRows;
	char star = '*';
	int result = 1;
	for (int numberOfStars = 0; numberOfStars <= numberOfRows; numberOfStars++, numberOfSpaces--)
	{
		for (int i = 0; i < numberOfSpaces; i++)
		{
			cout << " ";
		}

		for (int i = 0; i < numberOfStars; i++)
		{
			cout << star;
		}
		cout << "|";
		for (int i = 0; i < numberOfStars; i++)
		{
			cout << star;
		}
		cout << endl;

	}

	for (int lenght = 0; lenght < 3; lenght++)
	{
		for (int i = 0; i < numberOfRows; i++)
		{
			cout << " ";
		}
		cout << "|" << endl;
	}


}

void printSymbols(char symbol, int numbnerOfSymbols) {
	for (int i = 0; i < numbnerOfSymbols; i++)
	{
		cout << symbol;
	}
}
// star * numberOfStars
