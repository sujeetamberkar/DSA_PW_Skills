#include <iostream>
using namespace std;
int main (){
    float floating_number;
    cout <<"Enter a floating number\t";
    cin >> floating_number;

    int temp= int (floating_number);
    if (temp < 0 )
    {
        temp-=1;
    }
    float fractionalPart=floating_number-temp;
    cout<<"The decimal part of the number you entered is "<< fractionalPart;
    return 0;
}