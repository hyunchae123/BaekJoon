#include <iostream>

using namespace std;

int main()
{
	//�׽�Ʈ ���̽��� ũ��� �� �׽�Ʈ ���̽��� �ش��ϴ� A,B ���� �Է¹ް� A+B�� ����ϴ� �ڵ�
	int count;
	int A;
	int B;

	cin >> count;
	int* arry = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> A >> B;
		arry[i] = A + B;
	}

	for (int i = 0; i < count; i++)
	{
		cout << arry[i] << "\n";
	}


	return 0;
}