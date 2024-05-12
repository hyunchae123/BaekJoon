#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int num;
	int count = 0;
	int check = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0)
				check++;
		}

		if (check == 2)
			count++;
		 
		check = 0;
	}

	cout << count;

	return 0;
}