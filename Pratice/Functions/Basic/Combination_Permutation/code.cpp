#include<iostream>
using namespace std;
int factorial(int);
int combination(int,int);
int permutation(int,int);
int main()
{
    int a=1;
    int x=5,y=2;
    cout<<"Enter X\t";
    cin>>x;

    cout<<"Enter Y\t";
    cin>>y;
    a=combination(x,y);
    cout<<a;
    a=permutation(x,y);
    cout<<endl<<a;

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
