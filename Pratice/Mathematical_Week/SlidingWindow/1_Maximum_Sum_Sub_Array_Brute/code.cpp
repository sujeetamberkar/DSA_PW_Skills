#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main ()
{
    int max_index = -1;
    int array[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(array)/sizeof(array[0]);
    int k = 3;
    int sum = INT_MIN;
    int max_sum = 0;
    for(int i = 0 ; i <= n-k; i ++)
    {
        int sum = 0;
        for (int j = i; j< i +k;j++)
        {
            sum = sum + array[j];
        }
        // max_sum = max(sum,max_sum);
        if (max_sum < sum )
        {
            max_index = i;
            max_sum = sum;
        }


    }
    // Time Complexity =  O (n * k)

    cout <<max_sum;


}