#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main()
{
    string s= "leetcode";

    int array[26]={0};
    for(int i =0 ; s[i]!='\0';i++)
    {
        array[int(s[i])-97]++;
    }

    int max=array[0];
    int index=0;
    for(int i=1;i<26;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
            index=i;
        }

    }
    cout<<"The most frequent character is "<<char(index+97);

return 0;    
}