#include<iostream>
using namespace std;
int sum_ofN (int n)
{
    if (n == 0)
    {
        return 0;
    }
    int answer = n + sum_ofN(n-1);
    return answer;
    
    }
int main()
{
    cout<<sum_ofN(3);

    return 0;

}