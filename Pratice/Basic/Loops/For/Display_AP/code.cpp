#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "a ";
    cin >> a;

    cout << "d ";
    cin >> d;

    cout << "n ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << a + i * d << " ";
    }

    return 0;
}