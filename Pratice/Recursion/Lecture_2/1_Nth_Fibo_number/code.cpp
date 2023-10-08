#include<iostream>
using namespace std;
int fibo(int n);

int main()
{
    cout<<fibo(5);

return 0;
}

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
// Fibo is calling itself 2 times 
    return fibo(n-1) + fibo(n-2);

}
// Euler tree 