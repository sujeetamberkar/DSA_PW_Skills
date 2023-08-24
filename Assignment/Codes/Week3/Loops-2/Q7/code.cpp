//Print the factorials of first ‘n’ numbers
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        cout<<"Factorial of "<<i <<" is ";
        fact=1;
        for(int j=1; j<=i;j++)
        {
            fact*=j;
        }
        cout<<fact<<endl;

    }
    return 0;

}