#include<iostream>
using namespace std;
int main()
{
    int array[8]= {0,1,2,3,4,8,9,12}; 

    int n = 8;

    int low = 0 ;
    int high = n-1;
    int mid;
    int answer;
    while (low <=high)
    {
        mid = low + (high-low)/2;

        if (array[mid]!=mid)
        {
            answer= mid;
            high=mid -1;
        }
        else {
            low = mid +1;
        }
    }

    cout <<answer;
    
}