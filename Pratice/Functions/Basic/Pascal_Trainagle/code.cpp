#include<iostream>
using namespace std;
int factorial(int);
int combination(int,int);
int permutation(int,int);
int main()
{
    int n=6;
    int a;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            a=combination(i, j);
            cout<<a<<" ";
        }
        cout<<endl;
    }

}


int factorial(int a)
{
    int fact=1;
    while (a>=1)
    {
        fact=fact*a;
        a--;    
    }
    return fact;
    
}

int combination(int n, int r)
{
    int nCr=1;
    nCr=(factorial(n))/((factorial(r))*(factorial(n-r)));
    return nCr;
}

int permutation(int n,int r)
{
    int nPr=1;
    nPr=(factorial(n))/(factorial(n-r));
    return nPr;
}
