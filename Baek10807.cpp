#include <iostream>

using namespace std;

int main()
{
	//�迭�� ũ�⸦ �Է¹ް� �� ũ�⸸ŭ ������ �Է¹��� �� Ư�� ������ �Է��ϸ� �� ������ �迭 �ȿ� ��� �ִ��� ����ϴ� �ڵ�
	int size;
	int num;
	int count = 0;

	cin >> size;
	int* arry = new int[size];


	for (int i = 0; i < size; i++)
	{
		cin >> arry[i];
	}

	cin >> num;

	for (int i = 0; i < size; i++)
	{
		if (arry[i] == num)
			count++;
	}

	cout << count;

	delete []arry;

	return 0;
}