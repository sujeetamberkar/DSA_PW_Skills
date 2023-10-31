#include<iostream>
#include<vector>
using namespace std;
void Print_Vector(vector<int> &);
int store_RainWater(vector<int> &);

int main()
{
    vector<int> v;
    int n,temp;

    cout<<"Enter Number of elements ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int value=store_RainWater(v);
    cout<<value;
}
void Print_Vector(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}

int store_RainWater(vector<int> &v)
{
    vector <int> prev;
    vector <int> nextLargest;
    vector <int> bounded;
    int var;
    int volume=0;
    prev.push_back(-1);
    int max=v[0];
    for(int i=0;i<v.size()-1;i++)
    {
        if(max < v[i])
        {
            max=v[i];
        }
        prev.push_back(max);
    }

    for(int i=0;i<v.size()-1;i++)
    {
        max=v[i+1];
        for(int j=i+1;j<v.size();j++)
        {
            if (max<v[j])
            {
                max=v[j];
            }
        }
        nextLargest.push_back(max);

    }
    nextLargest.push_back(-1);

    for(int i=0;i<v.size();i++)
    {
        var=min(nextLargest[i],prev[i]);
        bounded.push_back(var);
    }
    for(int i=0;i<bounded.size();i++)
    {
        if(v[i]<bounded[i])
        {
            volume=volume+ (bounded[i]-v[i]);
        }
    }

    return volume;
}