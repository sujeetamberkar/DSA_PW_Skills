#include<iostream>
using namespace std;

int main()
{
    /*
    Given an array with N distinct elements, convert the given array to a form where all elements 
    are in the range from 0 to N-1. 
    The order of elements is the same, i.e., 
    0 is placed in the place of the smallest element, 
    1 is placed for the second smallest element, 
    .. N-1 is placed for the largest element.
    */

    int n=5;
    int arr[]={19,12,23,8,16};
    bool flag_array[5]={0};
    int min;
    int output=0;

    for(int i=0; i<n; i++)
    {
        min=0;
        
        // Find an unflagged minimum
        while(flag_array[min])
            min++;
        
        for(int j=0; j<n; j++)
        {
            if(!flag_array[j] && arr[min]>arr[j])
            {
                min=j;
            }
        }
        
        flag_array[min]=1;
        arr[min]=output;
        output++;
    }

    for(int element : arr)
    {
        cout<<element<<" ";
    }

    return 0;
}

/*
Time Complexity:
Best: case: O(n^2)- Even in best case scenerio you will check all elements
Average: O(n^2)
Worst: O(n^2)


Space Complexity:
Best, Average, Worst : O (N)
If you want to do this is O(1) space complexity then you can replace everything by 0,-1,-2,-3
and then multiply everything by -1 to get the output
But that code will not be correct if the initial array contains -ve element 
*/