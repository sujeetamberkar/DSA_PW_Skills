#include<iostream>
using namespace std;
int main()
{
    int array [13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int target = 100;
    int n =13;
    int low = 0;
    int high = n-1;
    int mid;
    int answer=-1;
    bool flag = false;
    while (low <= high)
    {
        mid = (high+ low)/ 2;
        if (array[mid] == target)
        {
            
            if (array[mid-1]== target)
            {
                high= mid -1 ;
            }
            else {
                answer=mid;
                flag=true;
                break;
            }
        }
        else if (array[mid]>target)
        {
            high= mid-1;
        }
        else {
            low = mid +1;
        }
    }

    cout <<answer;
    
}