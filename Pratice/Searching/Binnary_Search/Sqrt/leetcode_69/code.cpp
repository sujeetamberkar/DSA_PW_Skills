#include<iostream>
using namespace std;
int mySqrt (int );
int main()
{
    int y=20;
    cout<<mySqrt(y);

    return 0;
}
int mySqrt(int x)
{
    int low= 0; 
    int high = x;
    int mid;
    int answer;
    while (low <= high)
    {

        mid = low + (high-low)/2;

        if (mid * mid  == x)
        {
            return mid;
        }
        else if (mid * mid > x)
        {
            high= mid -1;
        }
        else {
            low = mid +1;
        }
        answer= high;
    }
    return answer;

}