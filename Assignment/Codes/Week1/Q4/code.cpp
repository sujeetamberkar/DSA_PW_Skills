// WAP for finding the volume of the cylinder by taking radius and height as input.
# include <iostream>
using namespace std;
int main(){
    float r,h,area;
    cout<<"Enter r\t";
    cin>>r;
    cout<<"Enter h\t";
    cin>>h;
    area=(3.14)*r*r*h;
    cout<<"Area\t"<<area;
    return 0;
}