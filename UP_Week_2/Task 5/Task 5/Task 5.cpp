
#include <iostream>
using namespace std;
int main()
{
	int number;
	int result = 0;

	for (int negativeNumberCounter = 0; negativeNumberCounter < 3;)
	{
		cin >> number;
		if (number >= 0) {
			negativeNumberCounter = 0;
			result = 0;
		} else {
			negativeNumberCounter++;
			if (number < result) {
				result = number;
			}
		}
	}
	cout << result;
}
