#include <iostream>

using namespace std;
int main()
{
	//����N�� �Է¹޾Ƽ� N��° �ٿ� N���� ���� ��µ� ���������� �о ������ �ڵ�
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = N-i-1; j > 0; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}

		cout << endl;
	}
	
	return 0;
}