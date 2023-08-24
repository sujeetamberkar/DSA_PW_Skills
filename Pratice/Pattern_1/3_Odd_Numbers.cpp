#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number\t";
    cin>>num;

    for (int i=0;i<=num;i++){
        for(int j=0;j<2*i-1;j+=2)
        {
            cout<<i;
           }
        cout<<endl;       
    }
    return 0;
}