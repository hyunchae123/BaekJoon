#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int check = 2;

	if (N != 1)
	{
		while (N > 1)
		{
			if (N % check == 0)
			{
				cout << check << endl;
				N /= check;
			}
			else
			{
				check++;
			}
		}
	}
	

	


	return 0;
}