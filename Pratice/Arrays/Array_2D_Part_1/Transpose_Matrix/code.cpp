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

    int array[m][n];
    int transposeArray[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            transposeArray[i][j]=array[j][i];
        }
    }

    cout<<"\n\nThe Orignal Array"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n\nThe Transposed Array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<transposeArray[i][j]<<"\t";
        }
        cout<<endl;
    }
}