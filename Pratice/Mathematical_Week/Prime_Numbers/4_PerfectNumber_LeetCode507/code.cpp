#include<iostream>
#include<cmath>
using namespace std;
bool checkPerfectNumber(int );

int main()
{
    int number ;
    cout << "Enter a Number ";
    cin>>number;
    if (checkPerfectNumber(number))
    {
        cout << number<< " is a Perfect Number "<<endl;
    }
    else {
        cout << number<< " is not a Perfect Number "<<endl;
    }

}
bool checkPerfectNumber(int n)
{
    int sum = 1;
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (i * i == n)
        {
            sum = sum + i;

        }
        else if (n % i == 0 )
        {
            sum = sum + i + (n/i);
        }
    }

    return sum == n ? 1 :0;

}