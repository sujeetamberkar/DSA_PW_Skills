#include<iostream>
#include<unordered_set> 
using namespace std;
int main ()
{
    unordered_set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(0);

    cout<<"Size of set is "<<s.size()<<endl;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(0);
    
    cout<<"\nSize of set is "<<s.size()<<endl;


    for (int element : s)
    {
        cout<<element<<"\t";
    }
    cout<<endl;

    s.erase(1);
        cout<<"\nSize of set is "<<s.size()<<endl;


    for (int element : s)
    {
        cout<<element<<"\t";
    }




    // To check if exisit or not
    // s.find() seqarches in the set and if not found it returns the last element 
    int target = 2;
    if(s.find(target)!=s.end())
    {
        cout<<"\n"<<target<<" exisits"<<endl;
    }
    target = 1;
    if(s.find(target)!=s.end())
    {
        cout<<"\n"<<target<<" exisits"<<endl;
    }
    else {
        cout<<"\n"<<target<<" does not exisits"<<endl;

    }
}
