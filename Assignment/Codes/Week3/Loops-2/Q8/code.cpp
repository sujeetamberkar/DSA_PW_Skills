// Print first ‘n’ fibonacci numbers.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number\t";
    cin>>number;

    int a=0;
    int b=1;
    int temp=0;
    int counter=1;

    while (counter <=number)
    {
        cout<<a<<" ";
        temp=a;
        a=b;
        b=temp+b;
        counter++;
    }
    
    return 0;
}