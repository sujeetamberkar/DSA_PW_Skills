#include <iostream>
using namespace std;
int main ()
{
float a=5;
float b=2;
cout <<a+b<<endl;
cout <<a-b<<endl;
cout <<a*b<<endl;
cout <<a/b<<endl;

float x = 5 / 2;
cout <<x<<endl;
x = float(5) / 2;
cout <<x<<endl;

cout <<5%2<<endl;
//cout <<a%b<<endl;  You cannot mod, float in cpp

// When you try to assign a float value to interger 
int aa=3.5;
cout << endl<<aa<<endl;
return 0;
}