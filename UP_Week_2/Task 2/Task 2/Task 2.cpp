
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	int result = 0;
	for (int counter = 0; counter < n; counter++)
	{
		int input; 
		cin >> input;
		if (input > result)
		{
			result = input;
		}
		
	}
	cout << result;

}
