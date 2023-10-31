#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"ENter a number ";
    cin >> number;
    bool flag= true;

    for(int i=0; i<=number;i++)
    {
        for(int j=0; j <i;j++)
        {
            cout<<flag;
            flag=!flag;
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i <= number; i++)
    {
        for (int j=0; j < i;j++)
        {
            if ((i+j)%2==0)
            {
                /* code */
                cout<<'1';
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }






}

/*
ENter a number 4

1
01
010
1010

*/