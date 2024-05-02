#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int change[1000] = { 0, };
	int Quarter[1000] = { 0, };
	int Dime[1000] = { 0, };
	int Nickel[1000] = { 0, };
	int Penny[1000] = { 0, };


	for (int i = 0; i < num; i++)
	{
		cin >> change[i];
	}

	for (int i = 0; i < num; i++)
	{
		Quarter[i] = change[i] / 25;
		change[i] %= 25;
		Dime[i] = change[i] / 10;
		change[i] %= 10;
		Nickel[i] = change[i] / 5;
		change[i] %= 5;
		Penny[i] = change[i] / 1;
	}

	for (int i = 0; i < num; i++)
	{
		cout << Quarter[i] << " " << Dime[i] << " " << Nickel[i] << " " << Penny[i] << endl;
	}

	return 0;
}