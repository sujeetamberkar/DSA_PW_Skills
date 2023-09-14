#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int array[n];
    
    for(int i=0; i<n;i++)
    {
        cin>>array[i];
    }
    //n=sizeof(array)/sizeof(array[0]);
    int max=array[0];
    int max_2=array[1];
    if (max_2>max)
    {
        max_2=max+max_2;
        max=max_2-max;
        max_2=max_2-max;
    }

    for(int i=2;i<n;i++)
    {
        if(array[i]>max)
        {
            max_2=max;
            max=array[i];
        }
        

        else if(array[i]>max_2)
        max_2=array[i];
    }

    cout<<"Second largest element "<<max_2;
    
}