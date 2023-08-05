#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st Number\t";
    cin>>a;
    cout<<"Enter 2nd Number\t";
    cin>>b;
    cout<<"Enter 3rd Number\t";
    cin>>c;

int largest=c;
if (a>b && a>c)
{
    largest=a;
}
if (b>a && b>c)
{
    largest=b;
}
cout <<"The largest number is "<<largest;
return 0;

}