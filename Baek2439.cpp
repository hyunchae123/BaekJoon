#include <iostream>

using namespace std;
int main()
{
	//정수N을 입력받아서 N번째 줄에 N개의 별을 찍는데 오른쪽으로 밀어서 정렬한 코드
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = N-i-1; j > 0; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}

		cout << endl;
	}
	
	return 0;
}