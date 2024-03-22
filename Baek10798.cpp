#include <iostream>
#include <string>
using namespace std;

char arry[5][15];

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> arry[i];
	}
	
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arry[j][i] == NULL)
				continue;
			else
				cout << arry[j][i];
		}
	}

	return 0;
}