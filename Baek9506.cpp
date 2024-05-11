#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	while (n != -1)
	{
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum += i;
		}

		if (sum == n)
		{
			cout << n << " " << "=" << " ";

			int count = 0;
			for (int i = 1; i < n; i++)
			{
				if (n % i == 0)
				{
					cout << i << " ";
					count += i;
				}

				if (count != n && n % i == 0)
					cout << "+" << " ";

			}

			cout << endl;
		}
		else
			cout << n << " is NOT perfect." << endl;;

		sum = 0;

		cin >> n;
	}
	return 0;
}