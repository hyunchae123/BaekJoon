#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;

	cin >> num;
	
	int arry[16] = { 0, };
	arry[0] = 4;
	arry[1] = 9;
	
	for (int i = 2; i <= 15; i++)
	{
		arry[i] = pow(sqrt(arry[i - 1]) * 2 - 1, 2);
	}

	cout << arry[num];
	return 0;
}