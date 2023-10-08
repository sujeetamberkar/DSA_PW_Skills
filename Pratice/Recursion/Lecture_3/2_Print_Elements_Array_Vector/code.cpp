#include<iostream>
#include<vector>
using namespace std;

void display_Array(int arr[], int n, int index)
{
    if (index == n)
    {
        return;
    }
    cout<<arr[index]<<" ";
    display_Array(arr,n,index+1);

}
void display_Vector(vector<int> &v , int index)
{
    if (index==v.size())
    {
        return;
    }
    cout <<v[index]<<" ";
    display_Vector(v,index+1);
}
int main()
{
    int arr []= {10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Display Array \t";
    display_Array(arr,n,0);

    cout<<endl<<"Display Vector \t";
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    display_Vector(v,0);
}