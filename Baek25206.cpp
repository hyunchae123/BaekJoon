#include <iostream>
#include <string>
using namespace std;

int main()
{
	float totalSubject = 0;
	string s;
	float level;
	string score;
	float totalScore = 0.0f;

	for (int i = 0; i < 20; i++)
	{
		cin >> s >> level >> score;

		if (score != "P")
		{
			if (score == "A+")
			{
				totalSubject += level;
				totalScore += (level * 4.5);
			}
			else if (score == "A0")
			{
				totalSubject += level;
				totalScore += (level * 4.0);
			}
			else if (score == "B+")
			{
				totalSubject += level;
				totalScore += (level * 3.5);
			}
			else if (score == "B0")
			{
				totalSubject += level;
				totalScore += (level * 3.0);
			}
			else if (score == "C+")
			{
				totalSubject += level;
				totalScore += (level * 2.5);
			}
			else if (score == "C0")
			{
				totalSubject += level;
				totalScore += (level * 2.0);
			}
			else if (score == "D+")
			{
				totalSubject += level;
				totalScore += (level * 1.5);
			}
			else if (score == "D0")
			{
				totalSubject += level;
				totalScore += (level * 1.0);
			}
			else
			{
				totalSubject += level;
				totalScore += (level * 0.0);
			}
		}
	}

	cout << (totalScore / totalSubject);

	return 0;
}