#include<iostream>
#include<string>
using namespace std;

void removeChar(string ans, string orignal){
    char ch = orignal[0];
    if (orignal.length()==0)
    {
        cout<<ans;
        return;
    }
    if (ch == 'a')
    {
        removeChar(ans,orignal.substr(1)); // Everything escept 1
    }
    else {
        removeChar(ans+ch,orignal.substr(1));
    }
    
}
string removeChar2(string ans, string orignal){
    if (orignal.length()==0)
    {
        return ans;
    }
    char ch = orignal[0];
    if (ch == 'a')
    {
        return removeChar2 (ans,orignal.substr(1));
    }
    else {
        return removeChar2 (ans+ch,orignal.substr(1));
    }
    
}

// Better Space Complexity 
// in substr function new space is created at every iterations 

void removeChar3(string ans, string orignal, int index)
{
    if (index == orignal.length())
    {
        cout <<ans;
        return;
    }
    char ch = orignal[index];

    if (ch == 'a')
    {
        removeChar3(ans,orignal,index+1);
    }
    else {
        removeChar3(ans+ch,orignal,index+1);
    }
}

string removeChar4(string ans, string orignal, int index)
{
    if (index == orignal.length())
    {
        return ans;
    }
    char ch = orignal[index];

    if (ch == 'a')
    {
        return removeChar4 (ans,orignal,index+1);
    }
    else {
        return removeChar4(ans+ch,orignal,index+1);
    }
}
int main ()
{
    string str= "sujeet amberkar";
    removeChar("",str);
    cout<<endl<<removeChar2("",str)<<endl;
    removeChar3("",str,0);

    cout<<endl<<removeChar4("",str,0);

}