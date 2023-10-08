#include<iostream>
#include<string>
using namespace std;
void permutation(string answer , string orignal)
{
    if (orignal=="")
    {
        cout<<answer<<endl;
        return;
    }
    for (int i = 0 ; i <orignal.length(); i ++ )
    {
        char ch = orignal[i];
        string left=orignal.substr(0,i);
        string right=orignal.substr(i+1);
        permutation(answer+ch,left+right);
    }

}
int main()
{
    string str = "abcde";
    permutation("",str);
    // c ka index hai 2, string len = 5 (0-4)
    // How substr works ??????
    // string left = str.substr (0,2);
    // cout << left<<endl;
    // string right = str.substr(2+1);
    // cout<<right;


}