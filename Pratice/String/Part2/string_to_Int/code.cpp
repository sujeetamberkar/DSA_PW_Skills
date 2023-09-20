#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="12345678";

    int a=stoi(str);

    string str2="1234567812345678123456781234567812345678";
    long long x=stoll(str2);

// Storing long numbers as string is more memory effienct 


    return 0; 
}