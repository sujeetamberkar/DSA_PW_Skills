#include <iostream>
#include <vector>
using namespace std;
int search(vector<int>& , int );
int main()
{
    /*
    Linear sort will be O(n) always
    array = {1,2,4,5,5,9,15,18,21}
    Binarry sory will get this done in log(n) time complexity
    target = 18

    int low = 0
    int high = n-1
    int mid = (low+high) /2
    Now compared the mid with target

                    Search space reduction 
    if mid < target
    mid = new high
    else if mid > target
    mid = new high


    Total NO of elements = n
    Total NO of opperations = x

After every opperation, the search space will be reduced by half 

   
   if we get after x opperation 

     n/2 ---> n/4-----> n/ 8  ...  ---> n/ 2^x

        time complexity = log (n)


// Given a sorted array usually is Binarry Search 
    */


vector <int> a;
// 1,0,3,5,9,12
a.push_back(1);
a.push_back(0);
a.push_back(3);
a.push_back(5);
a.push_back(9);
a.push_back(12);
int target = 9;
int location = search(a,target);
cout <<location;

  return 0;
}
int search(vector<int>& nums, int target) {
        int low = 0;
    int high= nums.size()-1;
    int mid;
    while(low <= high)
    {
        mid = low + (high - low )/ 2;
        //mid = (low + high )/ 2;
        if (nums[mid]== target)
        {
            return mid ;
        }

        else {
            if (target <nums[mid])
            {
                high= mid - 1 ;
            }
            else {
                low = mid + 1;
            }
        }
    }
    return -1;
    }