
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	int sum = 0;
	sum = sum + (a % 10);
	sum = sum + (a % 10);
	
	cout << sum;
}
