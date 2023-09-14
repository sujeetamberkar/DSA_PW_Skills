#include<iostream>
using namespace std;
int main()
{
    int x;
    int temp;
    cout<<"Enter Target";
    cin>>x;
    vector<int> v;

    int n;
    cout<<"ENter the Size ";
    cin>>n;


    cout<<"Enter Elemetns of array ";

    for(int i=0;i<n;i++)
    {
        cin>> temp;
        v.push_back(temp);
    }

    for(int i=0;i<=v.size()-2;i++)
    {
        for(int j=i+1;j<=v.size()-1;j++)
        {
            if(v[i]+v[j]==x)
            {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}