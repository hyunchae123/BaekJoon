#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;

	int N;
	cin >> N;	//단어는 N개 주어진다.
	
	bool alpha[26] = { false, };

	string s;

	for (int i = 0; i < N; i++)
	{
		cin >> s;

		alpha[(int)s[0] - 'a'] = true;

		for (int k = 1; k < s.length(); k++)
		{
			if (s[k] == s[k - 1])
			{
				continue;
			}
			else if (s[k] != s[k - 1] && alpha[(int)s[k] - 'a'] == true)
			{
				count++;
				break;
			}
			else
			{
				alpha[(int)s[k] - 'a'] = true;
			}
		}

		for (int k = 0; k < 26; k++)
		{
			alpha[k] = 0;
		}
		
	}

	cout << N - count;

	return 0;
}