#include <iostream>
using namespace std;

int main()
{
	//A,B,C�� ������� �־����� �� 4���� ���� ����� ����ϴ� �ڵ�
	int A;
	int B;
	int C;

	cin >> A >> B >> C;
	cout << (A + B) % C << "\n" << ((A % C) + (B % C)) % C << "\n" << (A * B) % C << "\n" << ((A % C) * (B % C)) % C;

	return 0;
}