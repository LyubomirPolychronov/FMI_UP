#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int k;
	cin >> n >> k;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		int number = 0;
		for (int j = 0; j < i; j++) {
			number = j * (pow(10, i));
		}
		result += number;
	}
	cout << result;
}
// 2 + 22 + 222 + 2222 = 2 * ( 1 + 11 + 111 + 1111) = 2 * ( 11*10^0 + 11*10^1 + 11*10^2) = 2 * (11*(10^n))