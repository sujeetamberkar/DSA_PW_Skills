#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number\t";
    cin >> number;
    bool flag = 1;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            flag = 0;
            break;
        }
    }
    cout << endl;
    if (flag)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Composite Number";
    }
    return 0;
}