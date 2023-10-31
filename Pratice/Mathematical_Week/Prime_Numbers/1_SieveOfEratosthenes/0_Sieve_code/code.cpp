#include<iostream>
using namespace std;
int countPrimes(int );
void fillSleve(vector <bool> &);
int func(int n);
void fillSleve(vector <bool> &sieve);


int main()
{
    int number;
    cout <<"Enter a nymber\t";
    cin>>number;

    int answer = func(number);
    cout << answer;

    return 0;
}


int countPrimes(int n)
{
    vector < bool > v (n+1,false);
    v[1]=1;
    for (int i = 2 ; i <= sqrt(n) ; i++)
    {
        int multiplier = 2;
        if ( n % i == 0 )
        {            

            while (multiplier * i <= n)
            {
                v[multiplier * i] = true;
                multiplier++;
            }
        }
    }
    int counter = 0;
    for (int i = 2; i <= n;i++)
    {
        if (v[i]==0)
        {
            counter++;
        }
    }

    return counter;

}


int func(int n)
{
    vector <bool> workingtemp (n+1,false);
    fillSleve(workingtemp);
    int counter = 0;
    for (int i = 2; i <= n;i++)
    {
        if (workingtemp[i]==0)
        {
            counter++;
        }
    }
    return counter;

}

void fillSleve(vector <bool> &sieve)
{
    sieve[0]= true;
    sieve [1]= true;
    int n = sieve.size();
    n=n-1;

    for (int i = 2; i <= sqrt(n);i++)
    {
        int multiplier = 2;
        while (multiplier * i <= n)
        {
            sieve[multiplier * i] = true;
            multiplier++;
        }  
    }
}