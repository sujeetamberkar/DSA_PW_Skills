#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"ENter a Number\t";
    cin>>number;
    if(number % 2 == 0 )
    {
        cout<<"Number is Even";
    }
    else 
    {
        cout <<"Number is Odd";
    }

    return 0;
}