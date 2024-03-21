#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	int arry[26] = { 0, };

	for (int i = 0; i < s.length(); i++)
	{
		if ((int)s[i] > 91)
		{
			arry[(int)s[i] - 32 - 65]++;
		}
		else
		{
			arry[(int)s[i] - 65]++;
		}
	}

	int num = 0;

	for (int i = 1; i < 26; i++)
	{
		if (arry[i] > arry[num])
		{
			num = i;
		}
	}
	
	
	for (int i = 0; i < num; i++)
	{
		if (arry[num] == arry[i])
		{
			cout << "?";
			return 0;
		}
	}

	for (int i = 25; i > num; i--)
	{
		if (arry[num] == arry[i])
		{
			cout << "?";
			return 0;
		}
	}

	char ch(num + 65);
	cout << ch;

	return 0;
}