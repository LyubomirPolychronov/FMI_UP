
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	int D;
	D = (b * b) - (4 * a * c);
	int d;
	d = sqrt(D);
	int x1;
	int x2;
	x1 = (-b + d) / (a * 2);
	x2 = (-b - d) / (a * 2);
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}
