#include<iostream>
using namespace std;


int highestFactor(int );
int minSteps(int);
int func(int );
int main ()
{
    cout << minSteps(3);
    cout << func(3);

    
}
int func(int n)
{
    int count = 0;
        while (n>1)
        {
            int hf =highestFactor(n);
            count += (n/hf);
            n = hf;
        }
        return count;    
}
int minSteps(int n)
{
    // Base case // We dont need any opperation
    if (n == 1)
    {
        return 0;
    }
    int factor = highestFactor(n);

    if (factor == n || factor ==1) // Prime Number Copy itself
    {
        return n;
    }
    return 1 + minSteps(n/factor); 


}
int highestFactor(int n )
{
    for (int i = n/2; i >= 1; i--)
        {
            if (n%i == 0)
            {
                return i;
            }
        }
        return 1;
}
