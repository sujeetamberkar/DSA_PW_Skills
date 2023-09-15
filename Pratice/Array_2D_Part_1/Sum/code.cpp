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
    int sum= 0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           
                sum=sum*array[i][j];
        
            
        }
    }
    cout<<"\nThe Sum of the matrix  is "<<sum;
    
}