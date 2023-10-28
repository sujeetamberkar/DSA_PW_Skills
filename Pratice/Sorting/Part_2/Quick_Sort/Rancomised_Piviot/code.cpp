#include<iostream>
#include<algorithm>
using namespace std;
void quicksort(int [], int, int );
int partition(int [],int,int);
int main()
{
    int arr[]= {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    cout <<endl;
    for (int i = 0; i <n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void quicksort(int array [], int start_index, int end_index)
{
    if ( start_index>=end_index)
    {
        return;
    }
    int piviot_index= partition(array,start_index,end_index);

    quicksort(array,start_index,piviot_index-1);
    quicksort(array,piviot_index+1,end_index);

}
int partition(int array[],int start_index,int end_index)
{
    int piviot_Element = array[(start_index+end_index)/2];
    int count = 0;
    for (int i = start_index; i <=end_index;i++)
    {
        if (i == (start_index+end_index)/2) ///////////NOTE CHANGES
        {
            continue;
        }
        if (array[i]<=piviot_Element)
        {
            count++;
        }
    }
    int piviot_index= count+start_index;
    swap(array[(start_index+end_index)/2],array[piviot_index]);

    int i = start_index;
    int j = end_index;
    while (i <piviot_index && j > piviot_index)
    {
        if (array[i]<=piviot_Element)
        {
            i++;
        }
        if (array[j] >= piviot_Element)
        {
            j--;
        }
        else if (array[i]>piviot_Element && array[j] <= piviot_Element)
        {
            swap(array[i],array[j]);
            i++;
            j--;
        }

    }

    return piviot_index;
    

}