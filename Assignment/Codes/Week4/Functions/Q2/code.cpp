// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
#define PI 3.14159265359
using namespace std;

float area(int r)
{
    float area=1;
    area=PI*r*r;
    return area;
}

int main()
{
    int radius;
    cin>>radius;
    float answer=area(radius);
    cout<<"Area is "<<answer;

    return 0;
}