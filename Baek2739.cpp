#include <iostream>

using namespace std;

int main()
{
	//2단에서 9단까지 구구단을 출력하는 코드

	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		cout << N << " " << "*" << " " << i << " " << "=" << " " << N*i <<"\n";
	}

	return 0;
}