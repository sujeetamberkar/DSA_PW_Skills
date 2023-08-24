/*
Required Output:
1 
2 1
3 2 1
4 3 2 1

*/
#include<iostream>
using namespace std;
int main()
{
    int num=4;
    // cout<<"Enter a number";
    // cin>>num;


    for(int i=1; i<=num;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }    

}