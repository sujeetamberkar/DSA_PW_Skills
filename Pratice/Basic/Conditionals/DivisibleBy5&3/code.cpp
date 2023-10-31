#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"ENter a Number\t";
    cin>>number;
    if(number % 5 == 0 && number % 3 == 0)
    {
        cout<<"Number is Divisible by 3 and 5";
    }
    else 
    {
        cout <<"Number is not Divisible by 3 and 5";
    }

    return 0;
}