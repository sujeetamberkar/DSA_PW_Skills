#include<iostream>
using namespace std;
int main()
{
    float base,power;

    cout<<"Enter a base\t";
    cin>>base;
    cout<<"Enter a power";
    cin>>power;
    float answer=1;


if (base==0)
    {
        answer=0;
        /* code */
    cout<<"Answer\t"<<answer;
    return 0;
    }


    if (power<0)
    {
        base=1/base;
        power=power*-1;
    }
    

    for (int i=1; i<=power;i++)
    {
        answer=answer*base;
    }
    
    cout<<"Answer\t"<<answer;

    
    
    
    return 0;
}