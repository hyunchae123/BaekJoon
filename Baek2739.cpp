#include <iostream>

using namespace std;

int main()
{
	//2�ܿ��� 9�ܱ��� �������� ����ϴ� �ڵ�

	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		cout << N << " " << "*" << " " << i << " " << "=" << " " << N*i <<"\n";
	}

	return 0;
}