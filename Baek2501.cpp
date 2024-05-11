#include <iostream>
using namespace std;

int main()
{
	int N, K;

	cin >> N >> K;

	int count = 0;
	int num = 0;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			count++;
		}

		if (count == K)
		{
			num = i;
			break;
		}
	}

	cout << num;

	if (count > K)
		cout << 0;

	return 0;
}