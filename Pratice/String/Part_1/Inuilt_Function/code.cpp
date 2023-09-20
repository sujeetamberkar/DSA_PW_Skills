#include <iostream>
using namespace std;
int main()
{
    string str = "Sujeet";
    int lengthstr = str.length();
    int lengthstr2 = str.size();

    cout << "Length\t" << lengthstr << endl; /// Without counting Null character
    cout << "Length\t" << lengthstr2 << endl;

    str.push_back('A'); /// Only one character push back allowed at a time
    cout << str << endl;

    str.pop_back();
    str.pop_back();
    cout << str << endl;

    string lastName= "Amberkar";
    str=str+lastName; // Modify, before or after // Append, concat

   

    cout<<str<<endl;
     string l= "abcdef";
    reverse(l.begin(),l.end());
    cout<<l<<endl;
    reverse(l.begin(),l.begin()+2); // Give one extra 
        cout<<l<<endl;

}