#include <iostream>

using namespace std;

int main()
{
	//정수 A,B를 입력받으면 A/B를 소수로 출력하는 코딩.
	double A;
	double B;
	long double ans;
	
	cout << fixed;
	cout.precision(12);

	cin >> A >> B;
	ans = A / B;
	
	cout << ans;

	return 0;
}