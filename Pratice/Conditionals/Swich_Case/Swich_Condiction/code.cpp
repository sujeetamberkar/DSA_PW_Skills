#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter Month number :";
    cin >> x;

    // This will be similar to if statement

    // 1,3,5,7,8,10,12   ----- > 31 days
    // 2                 ----- > 28 days
    // 4,6,9,11          ----- > 30 days

    switch (((x <= 7) && (x % 2 == 1)) || ((x >= 8) && (x < 12)) && (x % 2 == 0))
    {
    case 1:
        cout << "31";
    }

    switch (x == 4 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << '30';
        break;
    }

    switch (x == 2)
    {
    case 1:
        cout << "2";
    }

    switch (x < 1 || x > 12)
    {
    case 1:
        cout << "Not a  month number";
    }

    return 0;
}