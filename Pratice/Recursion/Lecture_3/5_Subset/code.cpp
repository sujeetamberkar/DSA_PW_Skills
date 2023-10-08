#include <iostream>
#include <string>
using namespace std;

void substring_subset(string answer, string orignal,vector <string> & v)
{
    if (orignal.length()== 0)
    {
            v.push_back(answer);
                return;
    }
    char ch = orignal[0];
    substring_subset(answer,orignal.substr(1),v);
    substring_subset(answer+ch,orignal.substr(1),v);

}
int main()
{
    vector<string> v ;
        substring_subset("","suj",v);

    for (string e : v)
    {
        cout <<e<<" ";
    }

    return 0;
}