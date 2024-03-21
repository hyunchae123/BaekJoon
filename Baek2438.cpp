#include <iostream>

using namespace std;

int main()
{
	// 정수N을 입력받고 N번째 줄에 N개의 별을 찍는 코드
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;

	}

	return 0;
}