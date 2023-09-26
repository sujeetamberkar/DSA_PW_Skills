#include<iostream>
#include<vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& );
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(10);
    v.push_back(5);
    v.push_back(2);

    int answer=peakIndexInMountainArray(v);
    cout<<v[answer];
    return 0;
}
int peakIndexInMountainArray(vector<int>& arr)
{
    int low = 1;
    int high = arr.size()-2;
    int mid;
    int answer =-1;
    while (low <= high)
    {
        mid = low + (high- low )/2;

        if ((arr[mid] > arr[mid+1]) && (arr[mid] > arr[mid -1]))
        {
            return mid;
        }
        else if (arr[mid]>arr[mid+1])
        {
            high= mid -1;
        }
        else {
            low = mid +1;
        }
    }
return -1;
    }

