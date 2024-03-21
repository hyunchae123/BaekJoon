#include <iostream>

using namespace std;

int main()
{
	//배열의 크기를 입력받고 그 크기만큼 정수를 입력받은 후 특정 정수를 입력하면 그 정수가 배열 안에 몇개나 있는지 출력하는 코드
	int size;
	int num;
	int count = 0;

	cin >> size;
	int* arry = new int[size];


	for (int i = 0; i < size; i++)
	{
		cin >> arry[i];
	}

	cin >> num;

	for (int i = 0; i < size; i++)
	{
		if (arry[i] == num)
			count++;
	}

	cout << count;

	delete []arry;

	return 0;
}