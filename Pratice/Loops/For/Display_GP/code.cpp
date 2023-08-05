#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int a, r, n;
    cout << "a ";
    cin >> a;

    cout << "r ";
    cin >> r;

    cout << "n ";
    cin >> n;    
    
    
    for(int i=1;i<=n;i++)
    {
        cout<<a*pow(r,i-1)<<" ";
    }

    return 0;
}