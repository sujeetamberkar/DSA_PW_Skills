#include<iostream>
#include <string>
using namespace std;
int main()
{
    /// In C++ , Strings are mutable 
    string str= "Sujeet";
    cout<<str<<endl;
    for(int i=0; str[i]!='\0';i++)
    {
        if(i%2==0)
        str[i]='A';
    }

    cout<<str<<endl;

}