#include<iostream>
#include<string>
using namespace std;
bool isIsomorphic(string , string );
int main()
{
    string string1="egg";
    string string2= "add";

    bool answer= isIsomorphic(string1,string2);
    cout<<answer;
    return 0;
    
}

bool isIsomorphic(string s, string t) {
    if(s.length()!=t.length())
    {
        return false;
    }
    vector<int> v(150,10000);


    for(int i=0;i<s.length();i++)
    {
        int index=(int)s[i];
        int var=s[i]-t[i];
        if(v[index]== 10000)
        {
            v[index]=var;
        }
        else if (v[index]!=var)
        {
            return false;
        }
    }

    for(int i=0;i<150;i++)
    {
        v[i]=10000;
    }

    for(int i=0;i<s.length();i++)
    {
        int index=(int)t[i];
        int var=t[i]-s[i];
        if(v[index]== 10000)
        {
            v[index]=var;
        }
        else if (v[index]!=var)
        {
            return false;
        }
    }

        return true;
    }