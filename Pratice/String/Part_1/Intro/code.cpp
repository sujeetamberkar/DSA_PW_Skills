#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[]={'S','U','J','E','E','T'};
    //    'S','U','J','E','E','T','\0'
    // Null character is used for terminating the string 
    char str2[]={'a','b','c','d','e'};
    //            0   1   2   3   4   \n=5th Char
  //  for(int i=0;str[i]!='\0';i++)
    //cout<<str[i]<<endl;
    //cout<<str2;


    // Input a string 
    // Just one word
    string name;
    cin>>name;

    
    string fullName;
    getline(cin,fullName); // VVIP


    cout<<"CIN says "<<name<<endl;
    cout<<"getline says "<<fullName;

}