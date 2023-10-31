// Square root of N
// if (perfect square, squareroot of N is a factor)
// othwerwise (just check 2 to root (n))
#include<iostream>
#include <vector>
#include <cmath>
using namespace std;
// If I do not want to use vector 
// I can print it using two loops
int main ()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    vector < int > vec;
    vec.push_back(1);
    for (int i = 2; i <= sqrt(n);i++)
    {
        if (i * i == n)
        {
        vec.push_back(i);

        }
        
        else if (n % i == 0)
        {
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
    vec.push_back(n);
    sort(vec.begin(),vec.end());
    for (int element : vec)
    {
        cout << element << " ";
    }



}
