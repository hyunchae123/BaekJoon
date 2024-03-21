#include <iostream>

using namespace std;

int main()
{
	//입력이 끝날 때까지 A+B를 출력하는 코드. 입력이 끝났다는건 Ctrl + z 로 표현하면 됨.
	int A;
	int B;
	int total;

	while (cin >> A >> B)
	{
		total = A + B;
		cout << total << "\n";
	}

	return 0;
}
