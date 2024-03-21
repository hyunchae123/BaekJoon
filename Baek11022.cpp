#include <iostream>
using namespace std;

int main()
{
	//두 정수 A,B를 입력받고 그 합을 아름답게 출력하기

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