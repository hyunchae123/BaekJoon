#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string N;
	int B;
	int result = 0;

	cin >> N >> B;

	if (B < 10)
	{
		for (int i = 1; i <= N.length(); i++)
		{
			result += ((int)N[i - 1] - 48) * pow(B, N.length() - i);
		}
		
	}
	else
	{
		for (int i = 1; i <= N.length(); i++)
		{
			if((int)N[i - 1] >= 65)
				result += ((int)N[i - 1] - 55) * pow(B, N.length() - i);
			else
				result += ((int)N[i - 1] - 48) * pow(B, N.length() - i);

			
		}
	}
	 
	cout << result;

	return 0;
}