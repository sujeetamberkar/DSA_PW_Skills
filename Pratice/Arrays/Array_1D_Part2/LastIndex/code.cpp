#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(1);
    
    int x=1;
    int index=-1;
    for(int i= v.size()-1;i>=0;i--)
    {
        if (v[i]==x)
        {
            index=i;
            break;
        }
        
    }

    cout<<"The last occurence of "<<x<<" is "<<index;
    return 0;
}