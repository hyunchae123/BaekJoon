#include <iostream>
using namespace std;

int main()
{
	//바구니 숫자 뒤집기 코드.

	int N;
	int M;
	int i;
	int j;

	int arry[101] = { 0, };
	int arry2[101] = { 0, };

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		arry[i] = i + 1;
	}

	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;

		for (int u = 0; u < N; u++)
		{
			arry2[u] = arry[u];
		}
		
		for (int w = i - 1; w <= j - 1; w++)
		{
			arry[w] = arry2[i + j - w - 2];
		}

	}


	for (int i = 0; i < N; i++)
	{
		cout << arry[i] << " ";
	}

	return 0;
}