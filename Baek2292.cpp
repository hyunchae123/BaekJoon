#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int max = 1;
	int layer = 1;

	while (true)
	{
		if (num <= max)
			break;
		max += 6 * layer;
		layer++;
	}

	cout << layer;

	return 0;
}