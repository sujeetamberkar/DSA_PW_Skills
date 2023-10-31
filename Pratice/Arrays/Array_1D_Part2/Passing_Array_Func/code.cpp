#include<iostream>
using namespace std;

void arrayFunction(int arrar[]);
int main()
{
    int arr[]={1,2,3,4};
    arrayFunction(arr);
    cout<<arr[0];
    return 0;
}
void arrayFunction(int arrar[])
{
    arrar[0]=100;
}