#include <iostream>
using namespace std;

int main()
{
	//N���� ���� �߿��� X���� ���� ���� ����ϴ� �ڵ�

	int N;
	int X;

	cin >> N >> X;

	int* arry = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arry[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (arry[i] < X)
			cout << arry[i] << " ";
	}

	delete[] arry;

	return 0;
}