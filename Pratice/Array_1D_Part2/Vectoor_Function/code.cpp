#include <iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(99);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);

    for(int i=0; i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

    sort(v.begin(),v.end());

    cout<<endl;
for(int i=0; i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

    return 0;
}