/*
    5   1   8   2   7   6   3   4
   (5) ---- > Move  (5) to it scorrect place

    7   1   8   2   5   6   3   4

    
    7   1   8   2   5   6   3   4
    i              ()           j

    < Numbers less      < Numbers more
        than 5    >         than 5 >


    4   1   8   2   5   6   3   7
        i          ()       j    

    4   1   8   2   5   6   3   7
            i      ()       j

    4   1   3   2   5   6   8   7
            i      ()       j
    
    4   1   3   2   5   6   8   7
                i  ()   j
    
    4   1   3   2   5   6   8   7
                   ()
                   i
                   j   

// Magic 
    Use quick sort on 
    [4  1   3   2]    and [6    8   7]

1) Function call, to sent the piviot to its right place 



How to choose the piviot point ? 
1) As of now take the first element as piviot point 
                                        STARTING INDEX

2) To set the piviot -- > Find Piviot Index
                                ---> By finding the NO of elements less than piviot element
                                ---> count ++;
                    
                    --> Index of Piviot = Count + start index (Initially start Index = 0)
*/

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
    // 5,1,8,2,7,6,3,4
    int piviot_index= partition(array,start_index,end_index);
    // After Partition Array will kinda look like 
    // 4,1,3,2,5,7,8,6

    quicksort(array,start_index,piviot_index-1);
    quicksort(array,piviot_index+1,end_index);

}
int partition(int array[],int start_index,int end_index)
{
    int piviot_Element = array[start_index];
    int count = 0;
    for (int i = start_index+1; i <=end_index;i++)
    {
        if (array[i]<=piviot_Element)
        {
            count++;
        }
    }
    int piviot_index= count+start_index;
    swap(array[start_index],array[piviot_index]);

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


// Average Case
// Time Complexity : n (log n) 



// Worst case (n^2)
// 5,4,3,2,1 or 1,2,3,4,5


