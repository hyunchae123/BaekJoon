#include <iostream>

using namespace std;

int main()
{
	// A와 B의 입력이 0이 될때까지 A와 B를 입력받고 A와 B의 입력이 0이 됐을 때 A+B를 출력하는 코드
	int A;
	int B;

	int total;

	int count = 0;

	int* arry;
	int* temp;

	cin >> A >> B;

	if (A != 0)
	{
		count++;
		total = A + B;
		arry = new int[count];
		arry[0] = total;

		cin >> A >> B;

		while (A != 0)
		{
			count++;
			total = A + B;
			temp = arry;
			arry = new int[count];
			for (int i = 0; i < count - 1; i++)
			{
				arry[i] = temp[i];
			}
			arry[count - 1] = total;
			delete[] temp;

			cin >> A >> B;
		}

		for (int i = 0; i < count; i++)
		{
			cout << arry[i] << "\n";
		}
		
		delete[] arry;
	}

	return 0;
}