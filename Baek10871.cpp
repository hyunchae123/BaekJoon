#include <iostream>
using namespace std;

int main()
{
	//N개의 숫자 중에서 X보다 작은 수를 출력하는 코드

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