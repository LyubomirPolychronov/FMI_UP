#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;
	for (int positiveNumberCounter = 0; positiveNumberCounter < 5; positiveNumberCounter++)
	{
		cin >> number;
		if (number < 0 )
		{
			positiveNumberCounter--;
		}
		if (number > 0)
		{
			sum += number;
		}
	}
	cout << sum;
}
