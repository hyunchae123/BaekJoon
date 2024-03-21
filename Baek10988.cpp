#include <iostream>
#include <string>
using namespace std;

int main()
{
	int check = 0;

	string s1;
	string s2;

	cin >> s1;

	s2 = s1;

	for (int i = s1.length(); i > 0; i--)
	{
		s2[s1.length() - i] = s1[i - 1];
	}

	if (s1 == s2)
	{
		check = 1;
	}
	else
	{
		check = 0;
	}

	cout << check;
	

	return 0;
}