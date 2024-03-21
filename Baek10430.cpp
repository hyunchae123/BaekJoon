#include <iostream>
using namespace std;

int main()
{
	//A,B,C가 순서대로 주어졌을 때 4가지 연산 결과를 출력하는 코드
	int A;
	int B;
	int C;

	cin >> A >> B >> C;
	cout << (A + B) % C << "\n" << ((A % C) + (B % C)) % C << "\n" << (A * B) % C << "\n" << ((A % C) * (B % C)) % C;

	return 0;
}