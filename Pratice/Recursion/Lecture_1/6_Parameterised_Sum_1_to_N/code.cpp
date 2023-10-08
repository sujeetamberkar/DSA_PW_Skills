#include<iostream>
using namespace std;
int sum_of_n(int , int);
void PW_Code_sum_ofN(int,int);
int main()
{
    int answer= sum_of_n(0,3);
    cout<<answer;


PW_Code_sum_ofN(0,4);
    return 0;
}
int sum_of_n (int a, int b)
{
    if (a==b)
    {
        return b;
    }
    return a + sum_of_n(a+1,b);
}
void PW_Code_sum_ofN(int sum, int n)
{
    if (n== 0)
    {   cout<<endl<<sum;
        return ;
    }
    PW_Code_sum_ofN(sum + n, n-1);
}
