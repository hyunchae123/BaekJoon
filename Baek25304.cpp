#include <iostream>
using namespace std;

int main()
{
	//������ �� ���ݰ� ���� ����, �� ������ ������ ������ �Է��ϰ� �������� �� ������ ��ġ�ϴ��� Ȯ���ϴ� �ڵ�
	int X;
	int N;
	int a;
	int b;
	int total = 0;

	cin >> X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		total += a * b;
	}

	if (total == X)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}