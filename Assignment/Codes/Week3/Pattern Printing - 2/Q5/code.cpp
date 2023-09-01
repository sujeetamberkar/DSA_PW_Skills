/*

1 2 3 4 3 2 1 
1 2 3  3 2 1
1 2    2 1
1      1

*/
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    cout<<"enter a number\t";
    cin>>n;

    for (int i = 1; i <= n; ++i)
    {
        cout << i << " ";
    }

    for (int i = n-1; i >= 1; i--)
    {
        cout << i << " ";
    }
int a=3;
    cout<<endl;
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            cout << j << " ";
        }
        for (int j = 0; j < 2 * i - 1; ++j)
        {
            cout << " ";
        }
        a=4;
        for (int j = 1; j <= n - i; ++j)
        {
            cout << a-j-i+1<< " ";
        }
        cout << endl;
    }
}