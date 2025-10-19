

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	char c;
	double b;
	cin >> a >> c >> b;
	if (c == '+')
	{
		cout << a + b;
	}
	if (c == '-')
	{
		cout << a - b;
	}
	if (c == '*')
	{
		cout << a * b;
	}
	if (c == '/')
	{
		if (fabs(b == 0))
		{
			cout << "Error! You can't divide by 0!" << endl;
		}
		cout << a / b;
	}
}
