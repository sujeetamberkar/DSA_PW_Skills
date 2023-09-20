#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{

    vector <string> v;
    v.push_back("1234");
    v.push_back("0234");
    v.push_back("4");
    v.push_back("0");
    v.push_back("0021234");
    long long  max_var=stoll(v[0]);
    for(int i=0;i<v.size();i++)
    {
        if (max_var < stoll(v[i]))
        {
            max_var=stoll(v[i]);
        }

    }
    cout<<"The largest number is "<<max_var;

    return 0;
}