#include<iostream>
using namespace std;
int main()
{
    int n;
    int temp;
    vector<int> v;
    cout<<" How many elements ";
    cin>>n;

    cout<<"Enter ELements ";
    for(int i=0; i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    vector<int> v2;
    for(int i=0;i<=n;i++)
    {
        cout<<v[v.size()-1-i]<<" ";

    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }

}