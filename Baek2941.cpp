#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c' && s[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (s[i] == 'c' && s[i + 1] == '-')
		{
			count++;
			i++;
		}
		else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
		{
			count++;
			i += 2;
		}
		else if (s[i] == 'd' && s[i + 1] == '-')
		{
			count++;
			i++;
		}
		else if (s[i] == 'l' && s[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j')
		{
			count++;
			i++;
		}
		else if (s[i] == 's' && s[i + 1] == '=')
		{
			count++;
			i++;
		}
		else if (s[i] == 'z' && s[i + 1] == '=')
		{
			count++;
			i++;
		}
		else
		{
			count++;
		}
	}

	cout << count;

	return 0;
}