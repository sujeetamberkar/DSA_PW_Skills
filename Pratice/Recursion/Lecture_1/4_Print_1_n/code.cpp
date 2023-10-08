#include<iostream>
using namespace std;

void print_1_n(int , int );
int main()
{
    print_1_n(1,8);
    return 0;
}
void print_1_n(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout<<i<<" ";
    print_1_n(i+1,n);
}
