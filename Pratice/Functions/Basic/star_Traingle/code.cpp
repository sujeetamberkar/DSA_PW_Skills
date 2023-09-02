#include<iostream>
using namespace std;

void traingle(int );
int main()
{
    traingle(3);
        traingle(2);
    traingle(4);
}
void traingle (int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}