#include <iostream>
using namespace std;

int main()
{
	//주사위 숫자 3개를 입력해서 3개가 다 같으면 10,000원+(같은 눈)×1,000원, 2개가 같으면 1,000원+(같은 눈)×100원, 다 다르면 (그 중 가장 큰 눈)×100원의 상금을 출력하는 코드
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