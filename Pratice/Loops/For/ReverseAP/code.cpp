#include <iostream>
using namespace std;
int main()
{

    int an, d, n;
    cout << "a ";
    cin >> an;

    cout << "d ";
    cin >> d;

    n = (an / d) + 1;

    for (int i = 1; i <= n; i++)
    {
        cout << an - d * (i - 1) << " ";
    }
}