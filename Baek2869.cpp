#include <iostream>
using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	int day = 0;
	int distance = 0;
	
	day = (V - A) / (A - B);
	if ((V - A) % (A - B) != 0)
		day++;
	distance = (A - B) * day;
	if (distance < V)
		day++;

	cout << day;
	
	return 0;
}