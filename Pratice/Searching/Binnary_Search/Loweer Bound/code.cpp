#include <iostream>
#include <vector>
using namespace std;
int search_higher_bound(vector<int> &, int);
int search_lower_bound(vector<int> &, int);
int main()
{
    vector<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.push_back(4);
    a.push_back(5);
    a.push_back(9);
    a.push_back(15);
    a.push_back(18);
    a.push_back(21);
    a.push_back(24);
    int target = 18;
    int high = search_higher_bound(a, target);
    int low = search_lower_bound(a, target);
    cout<<"The target is "<<target<<endl;
    cout << "The Lower Bound is " << low<<endl;

    cout << "The Upper bound is " << high;
    return 0;
}

int search_higher_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size();
    int mid;
    while (low <high)
    {
        mid = low + (high - low) / 2;
        // mid = (low + high )/ 2;
        if ( nums[mid]<= target)
        {
            low = mid +1;
        }
        else {
            high= mid;
        }
    }
    return high;
}
int search_lower_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size();
    int mid;
    while (low < high)
    {
        mid = low + (high - low) / 2;
        // mid = (low + high )/ 2;
        if ( nums[mid]< target)
        {
            low = mid +1;
        }
        else {
            high= mid;
        }
    }
    return low;
}
