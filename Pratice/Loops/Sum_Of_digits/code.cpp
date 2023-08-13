#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number\t";
    cin >> n;
    int r = 0;
    int sum = 0;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    cout << "The sum of digit is  " << sum;
    return 0;
}