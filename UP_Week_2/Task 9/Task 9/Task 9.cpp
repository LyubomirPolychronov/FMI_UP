
#include <iostream>
using namespace std;

int main()
{
	int number;
	char symbol;
	cin >> number >> symbol;
	int spaces = number;
	int symbols = 1;
	for ( symbols ; symbols <= number; symbols++, spaces--)
	{
		for (int i = 0; i < spaces; i++)
		{
			cout << " ";
		}
		for (int i = 0; i < symbols*2 - 1; i++)
		{
			cout << symbol;

		}
		cout << endl;
	}
	for (int spaces = 1, symbols = number - 1; symbols > 0; spaces++, symbols--)
	{
		for (int i = 0; i <= spaces; i++)
		{
			cout << " ";
		}
		for (int i = symbols*2 - 1; i > 0; i--)
		{
			cout << symbol;
		}
		cout << endl;
	}
}
