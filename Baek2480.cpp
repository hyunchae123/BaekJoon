#include <iostream>
using namespace std;

int main()
{
	//�ֻ��� ���� 3���� �Է��ؼ� 3���� �� ������ 10,000��+(���� ��)��1,000��, 2���� ������ 1,000��+(���� ��)��100��, �� �ٸ��� (�� �� ���� ū ��)��100���� ����� ����ϴ� �ڵ�
	int A;
	int B;
	int C;

	cin >> A >> B >> C;

	int arry[3] = { A, B, C };

	if ((A == B) && (B == C) && (A == C))
	{
		cout << 10000 + A * 1000;
	}
	else if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
	{
		if (A == B)
		{
			cout << 1000 + 100 * A;
		}
		else if (A == C)
		{
			cout << 1000 + 100 * A;
		}
		else
			cout << 1000 + 100 * B;
	}
	else if((A != B) && (A != C) && (B != C))
	{
		int n = arry[0];
		for (int i = 0; i < 3; i++)
		{
			if (arry[i] >= n)
				n = arry[i];
		}

		cout << 100 * n;
	}
	else

	return 0;
}