//WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;

    int ogNumber=number;
    int rev=0;
    int temp=0;
    while (number>0)
    {
        temp=number%10;
        rev=rev*10+temp;
        number=number/10;
    }

    cout<<"Rev number is "<<rev<<endl;
    cout<<"Sum of "<<ogNumber<<" and "<<rev<<" is "<<rev+ogNumber <<endl;
    
}