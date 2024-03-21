#include <iostream>

using namespace std;

int main()
{
	//테스트 케이스의 크기와 각 테스트 케이스에 해당하는 A,B 값을 입력받고 A+B를 출력하는 코드
	int count;
	int A;
	int B;

	cin >> count;
	int* arry = new int[count];

	for (int i = 0; i < count; i++)
	{
		cin >> A >> B;
		arry[i] = A + B;
	}

	for (int i = 0; i < count; i++)
	{
		cout << arry[i] << "\n";
	}


	return 0;
}