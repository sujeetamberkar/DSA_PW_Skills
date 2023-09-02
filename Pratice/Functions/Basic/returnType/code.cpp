#include<iostream>
using namespace std;

int sum(int ,int );
int main()
{
    int var=sum(3,5);
    cout<<"\nValue returned by the function is "<<var;
}
int sum (int a, int b)
{
    int sum_answer=0;
    sum_answer=a+b;
    cout<<sum_answer;
    return sum_answer;
}