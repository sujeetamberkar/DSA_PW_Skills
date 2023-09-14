#include <iostream>
#include<vector>
// Vectors are normally passed by value
// New vector is created and values are coppied 
using namespace std;

void change(vector<int> a)
{
    a[0]=100;
    for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;

}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(99);
    v.push_back(3);
    v.push_back(4);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
change(v);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
}