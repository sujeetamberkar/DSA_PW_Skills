#include<iostream>
#include<unordered_map>
using namespace std;
int main ()
{
        unordered_map <string, int> m;
        pair <string, int> p1;
        p1.first="Sujeet";
        p1.second=10;

        pair <string, int> p2;
        p2.first="Manali";
        p2.second=1;

        pair <string, int> p3;
        p3.first="Sanjay";
        p3.second=2;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    
    for(pair <string,int> element : m)
    {
        cout<<element.first<<"\t"<<element.second<<endl;
    }
     for(auto element : m)
    {
        cout<<element.first<<"\t"<<element.second<<endl;
    }

}