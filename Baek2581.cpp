#include <iostream>
using namespace std;

int main()
{
	int N, M;

	cin >> M;
	cin >> N;

	int sum = 0;
	int Min = M;

	int check = 0;

	for (int i = M; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				check++;
		}

		if (check == 2 && sum == 0)
			Min = i;

		if (check == 2)
			sum += i;

		check = 0;
	}

	if (sum == 0)
		cout << -1 << endl;
	else
	{
		cout << sum << endl;
		cout << Min << endl;
	}
	

	return 0;
}