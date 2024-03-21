#include <iostream>
#include <string>
using namespace std;

int main()
{
	//숫자를 반대로 읽어서 더 큰 숫자를 반대로 출력하는 코드.
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