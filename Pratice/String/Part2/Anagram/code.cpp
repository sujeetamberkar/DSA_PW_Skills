#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    
    string s="physicswallah";
    string s2="wallahphysics";

    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());

    bool flag=false;

    if(s==s2)
    flag=true;


   cout<<flag;
    

    return 0;
}