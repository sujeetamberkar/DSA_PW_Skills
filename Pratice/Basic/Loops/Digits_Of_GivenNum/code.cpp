#include <iostream>
using namespace std;
int main()
{

    int n = 1974;

    cout << "Enter a number\t";
    cin >> n;
    int count = 1;
    int a=n;
    
    while (n /= 10)
    {
        count++;
    }
    
    if (a==0)
    {
        count=1;
    }
    
    cout << "The Number of digits " << count;
    return 0;
}