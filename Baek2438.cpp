#include <iostream>

using namespace std;

int main()
{
	// ����N�� �Է¹ް� N��° �ٿ� N���� ���� ��� �ڵ�
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;

	}

	return 0;
}