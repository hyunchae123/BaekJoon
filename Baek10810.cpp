#include <iostream>
using namespace std;

int main()
{
	//�� �ִ� ����

	int N;
	int M;

	int i;
	int j;
	int k;

	cin >> N >> M;

	int arry[101] = {0,};
	
	for (int q = 0; q < M; q++)
	{
		cin >> i >> j >> k;

		for (int u = i - 1; u < j; u++)
		{
			arry[u] = k;
		}
	}

	for (int q = 0; q < N; q++)
	{
		cout << arry[q] << " ";
	}

	return 0;
}