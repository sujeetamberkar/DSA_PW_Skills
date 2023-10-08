#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[], int n, int index, vector<int> answer)
{
    if (index == n)
    {
        for ( int element : answer)
        {
            cout <<element<<" ";
        }
        cout <<endl;
        return;
    }
    // Add without pushback
    printSubset(arr,n,index+1,answer);


    // Add after pushback
    answer.push_back(arr[index]);
    printSubset(arr,n,index+1,answer);
}

int main()
{
    int arr[]= {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    printSubset(arr,n,0,v);
}