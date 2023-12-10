#include<unordered_map>
#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t);
int main ()
{
    string s = "anagram";
    string t = "nagaram";
    cout<<isAnagram(s,t);

}
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) 
            return false;
    
    unordered_map<char, int> freq;
    for (char element : s) 
            freq[element]++;

    unordered_map<char, int> freq2;
    for (char element : t) 
            freq2[element]++;

    for (auto element: freq)
    {
        if(element.second != freq2[element.first])
        return false;
    }
    return true;
    }