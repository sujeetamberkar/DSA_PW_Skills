#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout <<"Enter a string \t";
    getline(cin,str);
    int count=0;
    for(int i=0; str[i]!='\0';i++)
    {
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
        count++;
    }

    cout<<"The Number vowles in the given string is "<<count;

}