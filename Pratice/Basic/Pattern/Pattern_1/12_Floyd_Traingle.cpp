#include<iostream>
using namespace std;
int main()
{
    int number;
    int temp=1;
    cout<<"ENter a number ";
    cin >> number;

    // Use I and J only for stuctre whenever possible  
    for(int i =0 ; i <=number; i ++)
    {
        for (int j=0; j<i;j++)
        {
            cout<<temp<<" ";
            temp+=1;
        }
        cout<<endl;
    }
}