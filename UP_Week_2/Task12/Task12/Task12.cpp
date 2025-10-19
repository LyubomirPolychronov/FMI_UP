// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	int spaces = number - 1;
	int symbols = 1;
	for (symbols; symbols <= number; symbols++, spaces--)
	{
		for (int i = 1; i <= symbols; i++)
		{
			cout << i << " ";

		}
		for (int i = 0; i < spaces; i++)
		{
			cout << "  ";
		}

		if (symbols == number) {
			cout << "---- ";
		}
		else {
			cout << "     ";
		}

		for (int i = 0; i < spaces; i++)
		{
			cout << "  ";
		}
		for (int i = symbols; i >= 1; i--)
		{
			cout << i << " ";
		}
		cout << endl;
	}
	spaces = 1;
	for (symbols = number - 1; symbols >= 1; symbols--, spaces++)
	{
		for (int i = 1; i <= symbols; i++)
		{
			cout << i << " ";

		}
		for (int i = 0; i < spaces; i++)
		{
			cout << "  ";
		}
		if (symbols == number) {
			cout << "---- ";
		}
		else {
			cout << "     ";
		}
		for (int i = 0; i < spaces; i++)
		{
			cout << "  ";
		}
		for (int i = symbols; i >= 1; i--)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

