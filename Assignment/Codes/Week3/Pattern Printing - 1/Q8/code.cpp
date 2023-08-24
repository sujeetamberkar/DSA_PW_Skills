/*
Required Output:

1
12
123
1234

*/
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;

    for(int i=1; i<=number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}