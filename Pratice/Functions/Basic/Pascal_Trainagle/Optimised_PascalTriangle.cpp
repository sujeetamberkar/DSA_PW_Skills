#include<iostream>
using namespace std;
int main()
{
    /*
        next  =  curr * ((i-j) / (j+1))
    */
   int n=5;
   int curr=1;
   cout<<"Enter n\t";
   cin>>n;
    cout<<endl;
   for(int i=0;i<=n;i++)
   {
    curr=1;
    for(int j=0;j<=i;j++)
    {
        cout<<curr<<" ";
        curr=curr*(i-j)/(j+1);
    }
    cout<<endl;

   }
    return 0;
}