#include <iostream>

using namespace std;

int main()
{
	// 현재 시간과 분을 입력받고 요리하는데 걸리는 시간(분)을 입력받으면 요리가 완성되는 시간을 출력하는 코드
	int hour;
	int min;
	int time;

	int hour2;
	int min2;

	cin >> hour >> min;
	cin >> time;

	int n;
	n = (min + time) / 60;

	if (min + time < 60)
	{
		min2 = min + time;
		hour2 = hour;
	}
	else
	{
		min2 = min + time - 60 * n;
		hour2 = hour + n;
	}

	if (hour2 >= 24)
	{
		hour2 -= 24;
	}

	cout << hour2 << " " << min2;


	return 0;
}