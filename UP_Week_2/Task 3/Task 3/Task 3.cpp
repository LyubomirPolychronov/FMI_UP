#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int total = 1;
	for (int i = 1; i <= number; i++)
	{
		total *= i;
	}cout << total;
}
