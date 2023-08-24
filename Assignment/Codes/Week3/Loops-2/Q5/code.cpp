// WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number\t";
    cin>>number;

    int even_DigSum=0;
    int temp;
    while (number>0)
    {
        temp=number%10;
        number=number/10;
        if (temp%2==0)
        {
            even_DigSum+=temp;
        }
        
    }

   cout<<even_DigSum;
    
}