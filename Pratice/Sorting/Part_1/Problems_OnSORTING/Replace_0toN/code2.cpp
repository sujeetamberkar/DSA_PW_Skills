#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int arr[]={19,12,23,8,16};
    int n=5;
    vector <int> v (n,0); // 0 means not visited 
    int output=0;
    int min=INT_MAX;
    int min_index=-1;
    for(int i=0;i<n;i++)
    {
        min=INT_MAX;
        min_index=-1;

        for(int j = 0 ; j < n;j++)
        {
            if (v[j])
            {
                continue;
            }
            else {
                if (min>arr[j])
                {
                    min=arr[j];
                    min_index=j;
                }
            }
        }
        arr[min_index]=output;
        v[min_index]=1;
        output++;
    }


    for(int element : arr)
    {
        cout<<element<<" ";
            }
    return 0;

}