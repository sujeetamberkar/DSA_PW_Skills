#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;

    for(int i=0; i<number;i++)
    {
        
        for(int j=0; j<=i;j++)
        {
            cout<<2*j+1;

        }
        cout<<endl;
    }
}

/*
Enter a number4
1
13
135
1357
*/