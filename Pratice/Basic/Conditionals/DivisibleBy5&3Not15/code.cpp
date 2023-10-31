#include<iostream>
using namespace std;
int main(){
    int number;
    cout <<"ENter a Number\t";
    cin>>number;
    if(number % 5 == 0 || number % 3 == 0)
    {
        if (number % 15 != 0)
        {
            cout<<"Number is Divisible by 3 an or 5 but not by 15";
        } 
        else
        {
            cout<<"The number is Divisble by 3, 5 and 15";
        }
    }
    else 
    {
        cout <<"Number is not Divisible by 3 or 5";
    }
   return 0;
}