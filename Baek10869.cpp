#include <iostream>

using namespace std;

int main()
{
	//두 자연수를 입력받아 모든 사칙연산을 출력하는 코드
	int A;
	int B;

	cin >> A >> B;

	cout << A + B << "\n" << A - B << "\n" << A*B << "\n" << A / B << "\n" << A % B;

	return 0;
}