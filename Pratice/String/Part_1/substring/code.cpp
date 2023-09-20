#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string ";
    getline(cin,s);

    cout<<s.substr((s.length())/2);

}