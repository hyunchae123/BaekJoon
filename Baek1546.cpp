#include <iostream>
using namespace std;

int main()
{
	//시험점수 평균 조작하는 코드.
	float arry[1000] = { 0, };
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arry[i];
	}

	int max = arry[0];

	for (int i = 0; i < N; i++)
	{
		if (max <= arry[i])
		{
			max = arry[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		arry[i] = arry[i] / max * 100;
	}

	float average = 0;
	float sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += arry[i];
	}

	average = sum / N;

	cout << average;


	return 0;
}