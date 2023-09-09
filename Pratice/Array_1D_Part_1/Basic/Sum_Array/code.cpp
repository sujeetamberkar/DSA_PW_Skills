#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n\t";
    cin>>n;
    int array[n];
    cout<<"Enter array\n";

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }

    cout<<"\nSum of the Array is "<<sum;
}