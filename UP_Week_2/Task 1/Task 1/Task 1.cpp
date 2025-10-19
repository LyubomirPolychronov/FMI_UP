
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	//int counter = 0;
	//while (counter++ < n) {
	//	cin >> x;
	//	sum += x;
	//	//counter++;
	//	
	// }
	
	for (int x, int counter = 0; counter < n ; counter++)
	{
		cin >> x;
		sum += x;
	}
	/*do
	{
		cin >> x;
		sum += x;
		counter++;
	} while (counter < n);*/
	cout << sum;
}
