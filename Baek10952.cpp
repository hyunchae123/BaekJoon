#include <iostream>

using namespace std;

int main()
{
	// A�� B�� �Է��� 0�� �ɶ����� A�� B�� �Է¹ް� A�� B�� �Է��� 0�� ���� �� A+B�� ����ϴ� �ڵ�
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