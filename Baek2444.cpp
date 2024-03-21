#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N;

    cin >> N;

    int q = 1;

    for (int i = 1; i <= 2 * N - 1; i += 2)
    {
        for (int j = N - q - 1; j >= 0; j--)
        {
            cout << " ";
        }

        for (int w = i; w > 0; w--)
        {
            cout << "*";
        }

        q++;
        cout << endl;
    }

    q = 1;

    for (int i = 2 * N - 3; i >= 0; i -= 2)
    {
        for (int j = q; j > 0; j--)
        {
            cout << " ";
        }

        for (int w = i; w > 0; w--)
        {
            cout << "*";
        }

        q++;
        cout << endl;
    }

    return 0;
}