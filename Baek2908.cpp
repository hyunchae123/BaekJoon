#include <iostream>
#include <string>
using namespace std;

int main()
{
	//���ڸ� �ݴ�� �о �� ū ���ڸ� �ݴ�� ����ϴ� �ڵ�.
	string A;
	string B;
	string result;

	cin >> A >> B;

	for (int i = 2; i >= 0; i--)
	{
		if (A[i] > B[i])
		{
			result = A;
			break;
		}
		else if (A[i] < B[i])
		{
			result = B;
			break;
		}
	}

	
	for (int i = 2; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}