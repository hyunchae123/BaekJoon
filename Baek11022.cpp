#include <iostream>
using namespace std;

int main()
{
	//�� ���� A,B�� �Է¹ް� �� ���� �Ƹ���� ����ϱ�

	int T;
	cin >> T;

	int A;
	int B;

	int* arryA = new int[T];
	int* arryB = new int[T];
	int* arry = new int[T];

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		arryA[i] = A;
		arryB[i] = B;
		arry[i] = A + B;
	}

	for (int i = 0; i < T; i++)
	{
		cout << "Case #"<< i + 1 << ":" << " " << arryA[i] << " " << "+" << " " << arryB[i] << " " << "=" << " " << arry[i] << "\n";
	}
	
	delete[] arryA;
	delete[] arryB;
	delete[] arry;

	return 0;
}