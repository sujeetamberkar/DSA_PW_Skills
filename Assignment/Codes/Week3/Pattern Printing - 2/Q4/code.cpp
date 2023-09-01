
/*

A B C D E F G
A B C  E F G
A B    F G
A      G

*/
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    cout<<"enter a number\t";
    cin>>n;

    for (int i = 0; i < 2 * n - 1; ++i)
    {
        cout << (char)('A' + i) << " ";
    }

    cout<<endl;
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            cout << (char)('A' + j) << " ";
        }
        for (int j = 0; j < 2 * i - 1; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; ++j)
        {
            cout << (char)('A' + n + i + j - 1) << " ";
        }
        cout << endl;
    }
}