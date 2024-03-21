#include <iostream>
#include <string>

using namespace std;

int main()
{
	//단어 갯수 출력하는 코드.
	string s;
	
	getline(cin, s);

	char check = ' ';

	int num = 1;

	for (int i = 0; i < size(s); i++)
	{
		if (size(s) == 1 && s[0] == ' ')
		{
			num = 0;
			break;
		}

		if (s[i] == check)
		{
			num++;

			if (i == 0 && s[0] == ' ')
			{
				num--;
			}

			if (i == size(s) - 1 && s[size(s) - 1] == ' ')
			{
				num--;
			}
		}
	}

	cout << num;

	return 0;
}