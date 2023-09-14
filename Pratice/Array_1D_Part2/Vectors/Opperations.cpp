#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    int a=1;
    cout<<v[0]<<" "<<v[9]<<endl;

    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    v.pop_back();
       for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    // Pop back changes the size, Not the capacity
}