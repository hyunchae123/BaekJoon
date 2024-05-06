#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int X;
	cin >> X;

	int numerator = 1;
	int denominator = 1;
	int layer = 1;
	int count = 1;

	while (true)
	{
		if (X <= count)
			break;
		layer++;
		count += layer;

	}

	if (layer % 2 == 0)
	{
		numerator = layer - (count - X);
		denominator = (layer / layer) + (count - X);
	}
	else
	{
		denominator = layer - (count - X);
		numerator = (layer / layer) + (count - X);
	}

	cout << numerator << "/" << denominator;

	return 0;
}