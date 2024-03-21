#include <iostream>
using namespace std;

int main()
{
	int arry1[100][100];
	int arry2[100][100];

	int N;
	int M;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arry1[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arry2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arry1[i][j] + arry2[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}