#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<"Enter a number ";
    cin>>num;

    for(int i=1; i <=num; i++ )
    {
        for (int  j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }

    cout<<endl<<"Reversed Number Trainagle"<<endl;

        for(int i=1; i <=num; i++ )
    {
        for (int  j = 1; i+ j <= num + 1 ; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }



}


/*
Enter a number 4
1
12
123
1234

Reversed Number Trainagle
1234
123
12
1

*/