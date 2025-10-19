

#include <iostream>
using namespace std;

int main()
{
	int s;
	cin >> s;
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	seconds = s % 60;
	/*minutes = s / 60;
	hours = minutes / 60;
	minutes += minutes % 60;
	days = hours / 24;
	hours += hours / 24;
	if (seconds >= 60)
	{
		++minutes;
		if (minutes >= 60)
		{
			++hours;
			if (hours >= 24)
			{
				++days;
			}
		}
	}*/
	/*for (seconds = 0; seconds < s; seconds--) {
		if (seconds % 60 == 0) {
			minutes++;

		}
	}*/

	s -= seconds;
	minutes = (s % 3600) / 60;

	s = (s - minutes * 60) / 60;;
	hours = (s % (60*24)) / 60;
	days = (s - hours/24) / 24;

	//days = s / (24*3600);
	cout << days << "days, " << hours << " hours," << minutes << " min," << seconds << "sec.";
}
