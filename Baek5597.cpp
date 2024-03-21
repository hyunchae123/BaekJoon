#include <iostream>
using namespace std;

int main()
{
	//입력 안 된 숫자 찾아서 출력하기

	int arry[30] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30 };

	int n;

	for (int i = 0; i <28; i++)
	{
		cin >> n;
		
		for (int j = 0; j < 30; j++)
		{
			if (n == arry[j])
				arry[j] = 0;
		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (arry[i] != 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}