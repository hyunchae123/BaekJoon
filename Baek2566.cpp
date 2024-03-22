#include <iostream>
using namespace std;

int main()
{
	int maxNum = 0;
	int x = 0;
	int y = 0;

	int arry[9][9] = { 0, };

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arry[i][j];
		}
	}

	maxNum = arry[0][0];

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arry[i][j] >= maxNum)
			{
				maxNum = arry[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}

	cout << maxNum << endl;
	cout << x << " " << y;

	return 0;
}