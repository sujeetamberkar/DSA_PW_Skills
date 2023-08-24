/*
Desired Output
1 2 3 4 
1 2 3
1 2
1

*/
#include<iostream>
using namespace std;
int main()
{
    int number=4;
    cout<<"Enter a number ";
    cin>>number;
    int a=1;
    for(int i = 1; i <=number;i++)
    {
        a=1;
        for (int j=4; j>=i;a++,j--)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0;
}

