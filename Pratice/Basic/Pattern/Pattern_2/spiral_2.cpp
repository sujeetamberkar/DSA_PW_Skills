#include <iostream>
using namespace std;
int main()
{
    int number = 4;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            cout << min(i, j);
        }

        for (int k = number - 1; k >= 1; k--)
        {
            cout << min(k, i);
        }
        cout << endl;
    }

    cout << endl
         << endl;
    int a, b;

    for (int i = 1; i <= ((2 * number) - 1); i++)
    {
        for (int j = 1; j <= ((2 * number) - 1); j++)
        {

            a = i;
            b = j;
            if (i > number)
            {
                a = abs(number - i);
            }

            if (j > number)
            {
                b = abs(number - j);
            }

            cout << min(a, b);
        }
        cout << endl;
    }
}