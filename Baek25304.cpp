#include <iostream>
using namespace std;

int main()
{
	//영수증 총 가격과 물건 종류, 각 물건의 갯수와 가격을 입력하고 영수증의 총 가격이 일치하는지 확인하는 코드
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