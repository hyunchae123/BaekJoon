#include <iostream>

using namespace std;

int main()
{
	//���� A,B�� �Է¹����� A/B�� �Ҽ��� ����ϴ� �ڵ�.
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