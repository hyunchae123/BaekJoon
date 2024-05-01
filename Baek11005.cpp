#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;

	string result;

	if (B <= 10)
	{
		while (N > 0)
		{
			int temp = N % B;
			result += temp + '0';
			N /= B;
		}
	}
	else
	{
		while (N > 0)
		{
			int temp = N % B;
			if (temp >= 10)
				result += temp + '7';
			else
				result += temp + '0';

			N /= B;
		}
	}
	for (int i = result.length() - 1; i >= 0; i--)
		cout << result[i];

	return 0;
}