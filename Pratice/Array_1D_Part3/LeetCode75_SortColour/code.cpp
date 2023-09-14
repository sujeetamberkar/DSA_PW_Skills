#include<iostream>
using namespace std;
void sort1(vector<int> &);
void display_Vector(vector<int> &);
void sort2(vector<int> &);

int main()
{
    vector <int> v;
    int num;
    cout<<"Enter a number ";
    cin>>num;
    int temp;
    for(int i=0;i<num;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
// sort1(v);
sort2(v);
display_Vector(v);

    return 0;
}
void sort1(vector<int> &a)
{
    int Number_Of1s=0;
    int Number_Of0s=0;
    int Number_Of2s=0;
    
    for(int i =0; i<a.size();i++)
    {
        if (a[i]==0)
        {
            Number_Of0s++;
        }
        else if (a[i]==1)
        {
            Number_Of1s++;
        }
    }
    Number_Of2s=a.size()-(Number_Of0s+Number_Of1s);

    for(int i=0;i<a.size();i++)
    {
        if (i<Number_Of0s)
        {
            a[i]=0;
        }
        else if (i<Number_Of0s+Number_Of1s)
        {
            a[i]=1;
        }
        else {
            a[i]=2;
        }
        
    }

}
void display_Vector(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

}
// Mid ke sath Khelo 
void sort2(vector<int> &nums)
{
// 3 Pointer algorithm 
// Dutch Flag Algorithm 

int low=0,mid=0,high=nums.size()-1;

while(mid<high)
{
    if(nums[mid]==2)
    {
        swap(nums[mid],nums[high]);
        high--;
    }
    else if (nums[mid]==0)
    {
        swap(nums[mid],nums[low]);
        low++;
        mid++;
    }

    else if (nums[mid]==1)
    {
        mid++;
    }
}
}