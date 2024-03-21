#include <iostream>
using namespace std;

int main()
{
	//나머지를 구해서 서로 다른 나머지가 몇 개인지 구하는 코드

	int arry[42] = { 0, };

	int num;
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		arry[num % 42] = 1;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arry[i] == 1)
		{
			count++;
		}
	}

	cout << count;

	return 0;
}