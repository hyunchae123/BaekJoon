#include <iostream>

using namespace std;

int main()
{
	// ���� �ð��� ���� �Է¹ް� �丮�ϴµ� �ɸ��� �ð�(��)�� �Է¹����� �丮�� �ϼ��Ǵ� �ð��� ����ϴ� �ڵ�
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