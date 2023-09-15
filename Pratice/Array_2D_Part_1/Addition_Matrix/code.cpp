#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Matrix 1"<<endl;
    cout<<"Enter NO of rows\t";
    cin>>m;
    cout<<"Enter NO of Col\t";
    cin>>n;
    int array1[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   
            cin>>array1[i][j];
        }
    }
    int x,y;
    cout<<"Matrix 2"<<endl;
    cout<<"Enter NO of rows\t";
    cin>>x;
    cout<<"Enter NO of Col\t";
    cin>>y;
    int array2[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {   
            cin>>array2[i][j];
        }
    }

    if (x!=m || y!=n)
    {
        cout<<"\nAddition is not possible"<<endl;
    }

    int array3[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            array3[i][j]=array1[i][j]+array2[i][j];
        }
    }

    cout<<"\nThe Output"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array3[i][j]<<"\t";
        }
        cout<<endl;
    }
}