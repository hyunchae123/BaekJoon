#include <iostream>
using namespace std;

int main()
{
	int arry[100][100] = { 0, };
	int position1[100] = { 0, };
	int position2[100] = { 0, };

	int count = 0;

	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		cin >> position1[i] >> position2[i];
		
		for (int j = 0; j < 10; j++)
		{
			for (int h = 0; h < 10; h++)
			{
				if (arry[position1[i] + j][position2[i] + h] == 0)
				{
					arry[position1[i] + j][position2[i] + h] = 1;
				}
			}
			

		}

		for (int j = 0; j < 10; j++)
		{
			for (int h = 0; h < 10; h++)
			{
				if (arry[position1[i] + h][position2[i] + j] == 0)
				{
					arry[position1[i] + h][position2[i] + j] = 1;
				}
			}
			
		}
		
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			if (arry[i][j] == 1)
				count++;
	}

	cout << count;

	return 0;
}