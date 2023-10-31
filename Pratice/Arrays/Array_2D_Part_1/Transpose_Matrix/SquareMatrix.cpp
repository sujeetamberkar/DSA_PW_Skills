#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter NO. of rows/ col for Square Matrix\t";
    cin>>m;
    n=m;
    vector<vector<int > > v (m,vector<int>(n));
    for(int i=0;i<m;i++)// ROws
    {
        for(int j=0;j<n;j++)
        {
            cin>>v[i][j];

        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (i==j)
            continue;
            else {
                swap(v[i][j],v[j][i]);
            }
        }
    }
    cout<<"\nAfter Transposed "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
   cout<<"\nOrignal Array (Transpose of Transpose ) "<<endl;
   int temp=0;
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (i==j)
            continue;
            else {
                temp=v[i][j];
                v[i][j]=v[j][i];
                v[j][i]=temp;
            }
        }
    }
    
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
}