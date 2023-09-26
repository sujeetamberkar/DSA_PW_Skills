#include<iostream>
using namespace std;
int main()
{
    int x = 20;
    int answer=-1;
    int low = 0;
    int high = x;
    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;

        if (mid*mid == x)
        {
            answer= mid;
            break;
        }
        else if (mid * mid > x)
        {
            high= mid -1;
        }
        else {
            low = mid +1;
        }

    }

    cout <<high;
    return 0;

}