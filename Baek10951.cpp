#include <iostream>

using namespace std;

int main()
{
	//�Է��� ���� ������ A+B�� ����ϴ� �ڵ�. �Է��� �����ٴ°� Ctrl + z �� ǥ���ϸ� ��.
	int A;
	int B;
	int total;

	while (cin >> A >> B)
	{
		total = A + B;
		cout << total << "\n";
	}

	return 0;
}
