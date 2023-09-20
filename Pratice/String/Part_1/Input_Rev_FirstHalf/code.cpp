#include<iostream>
#include<string>
using  namespace std;

int main()
{
    int n;
    string str;
    cout<<"Enter a size of string ";
    cin>>n;
    str.resize(n);

    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    } 

    reverse(str.begin(),str.begin()+int(n/2));
    cout<<endl<<str;
    return 0;
}