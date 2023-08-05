#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character";
    cin>>ch;

    if((int(ch) >= int('a') && int(ch) <= int('z')) || ((int(ch) >= int('A') && int(ch) <= int('Z'))))
    {
    cout<<"Alphabet\n";
    if (int(ch) >= int('a') && int(ch) <= int('z') )
    {
        cout<<"Small case";
    }
    else
    {
        cout<<"Big case";
    }

    }
   return 0;

}