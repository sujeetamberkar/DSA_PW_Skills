#include <iostream>
using namespace std;
int main()
{

    int x;
    cout << "Enter a number ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }

    cout << "\nIts Ternarry Time" << endl;
    x % 2 == 0 ? cout << "Even Number" : cout << "Odd Number";

    return 0;
}