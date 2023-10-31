// Vector is a dynamic array 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v; // No need to give size;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    // If capacity is full, then double the capacity
     
    cout<<v[0];
    return 0;
}