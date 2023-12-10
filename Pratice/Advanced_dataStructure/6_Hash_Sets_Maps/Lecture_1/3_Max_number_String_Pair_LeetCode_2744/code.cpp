#include<iostream>
#include<unordered_set> 
#include<string>
#include<vector>
using namespace std;

    int maximumNumberOfStringPairs(vector<string>& );

int main ()
{
    vector <string> v = {"cd","ac","dc","ca","zz"};
    cout<<maximumNumberOfStringPairs(v);
}
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set <string> s;
        for(string element: words)
        {
            s.insert(element);
        }


        int count = 0;
        for(string element: words)
        {
            string temp = element;
            reverse(temp.begin(),temp.end());
            if(temp==element)
                continue;

            if(s.find(temp)!=s.end())
            {
                count++;
                s.erase(element);

            }

        }
        return count;
    }