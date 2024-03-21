#include <iostream>
using namespace std;

int main()
{
	//두 개의 세자리 수를 입력받아서 곱셈과정에서 나타나는 수들을 출력하는 코드
	int A;
	int B;
	int a;
	int b;
	int c;

	
	cin >> A;
	cin >> B;

	a = ((B % 100) % 10);
	b = ((B % 100) - a) / 10;
	c = (B / 100);

	cout << A * a << "\n";
	cout << A * b << "\n";
	cout << A * c << "\n";
	cout << (A * a) + (A * b) * 10 + (A * c) * 100 << "\n";


	return 0;
}