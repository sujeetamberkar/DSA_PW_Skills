#include <iostream>
using namespace std;
bool isUgly(int);

int main()
{
    int number;
    cout << "Enter a number";
    cin >> number;
    cout <<isUgly(number);
}

bool isUgly(int n)
{
    while (n % 5 == 0)
    {
        n = n/5;
    }
    while (n % 3 == 0)
    {
        n = n/3;
    }
    while (n % 2 == 0)
    {
        n = n/2;
    }
    return n == 1 ? true : false;

    
}