#include<unordered_map>
#include<iostream>
#include<string>
using namespace std;

// You will always find KEY
int main ()
{
    // Key, Value pair
    unordered_map <string,int> m;
    
    m["Sujeet"] = 50;
    m["Manali"] = 1;
    m["Sanjay"] = 2;

    for(auto element: m)
    {
        cout<<element.first<<"\t"<<element.second<<endl;
    }

    cout<<endl;
    m.erase("Sujeet");
    for(auto element: m)
        cout<<element.first<<"\t"<<element.second<<endl;

    cout<<"Size is "<<m.size()<<endl;
}