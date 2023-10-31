#include<iostream>
#include<cmath>
using namespace std;

int smallestValue(int);
bool isPrime(int);

int main()
{
    int number;
    cout << "Enter a Number ";
    cin >> number;
    int answer = smallestValue(number);
    cout << answer;
    return 0;
}

int smallestValue(int n) 
{
    // Base case: If n is prime, return n
    if(isPrime(n))
    {
        return n;
    }

    // Find the sum of prime factors of n
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i))
            {
                int m = n;
                while (m % i == 0)
                {
                    sum += i;
                    m /= i;
                }
            }
            if (isPrime(n/i) && i != n/i)  // Add the factor only if it's distinct from i
            {
                int m = n;
                while (m % (n/i) == 0)
                {
                    sum += (n/i);
                    m /= (n/i);
                }
            }
        }
    }

    // Highlighted change:
    // If the sum is same as n, return the sum to prevent infinite recursion
    if (sum == n)// 4 is the only exception
    {
        return sum;
    }

    // Recursively call smallestValue with the sum
    return smallestValue(sum);
}
bool isPrime(int number)
{
    if (number == 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
