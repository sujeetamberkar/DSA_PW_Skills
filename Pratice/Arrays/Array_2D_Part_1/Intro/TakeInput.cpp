#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"ENter the number of rows\t";
    cin>>m;
    cout<<"ENter the number of columns\t";
    cin>>n;
    int array[m][n];

/*
    0   1   2
   0
   1

   Actually speaking in Memory it is stored as array of array  
*/

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>array[i][j];
    }
}

cout<<"The Inputed array is "<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<array[i][j]<<"\t";
    }

    cout<<endl;
}
}