#include<set>
#include<map>
#include<iostream>
using namespace std;
int main ()
{
    set <int> s;
    s.insert(10);
    s.insert(-1);
    s.insert(49);

    for(int element : s)
    {
        cout<<element<<"\t";
    }
    cout<<endl;

    map <int,int> m;

    m[1]=100;
    m[2]=-20;
    m[3]=0;

    for( auto element : m)
    {
        cout<<element.first<<endl;
    }
    for( auto element : m)
    {
        cout<<element.second<<endl;
    }

    for( auto element : m)
    {
        cout<<element.first<<"\t"<<element.second<<endl;
    }
}
