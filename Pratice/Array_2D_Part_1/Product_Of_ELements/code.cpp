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
    int product= 1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           
                product=product*array[i][j];
        
            
        }
    }
    cout<<"\nThe product of elemnets in the Matrix  is "<<product;
    
}