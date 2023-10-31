#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter NO of rows\t";
    cin>>m;
    cout<<"Enter NO of Col\t";
    cin>>n;
    int array[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   
            cin>>array[i][j];
        }
    }
    int max= INT_MIN;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (max<array[i][j])
            {
                max=array[i][j];
            }
            
        }
    }

    int sec_Largest=INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(sec_Largest<array[i][j] && array[i][j] < max)
            {
                sec_Largest=array[i][j];
            }
        }
    }
    cout<<"\nThe largest number is "<<max;
    cout<<"\nThe Second largest number is "<<sec_Largest;
    
}