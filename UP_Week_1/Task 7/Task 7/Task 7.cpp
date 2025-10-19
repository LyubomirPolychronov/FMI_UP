
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int r;
	int x;
	int y;
	cin >> r >> x >> y;
	if (r == sqrt(x*x + y*y))
	{
		cout << "On the circle";
	}
	if (r > sqrt(x*x + y*y))
	{
		cout << "In the circle";
	}
	if (r < sqrt(x*x + y*y))
	{
		cout << "Out of the circle";
	}
}
