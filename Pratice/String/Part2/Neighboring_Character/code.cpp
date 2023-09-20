#include<iostream>
#include<string>
using namespace std;
int main()
{
    string string1;
    cout<<"Enter a string ";
    getline(cin,string1);
    int length=string1.length();
    int count=0;
    for(int i=0; string1[i]!='\0';i++)
    {
        if (length==1)
        {
            break;
        }
        if ((length ==2) && (string1[0]!= string1[1]))
        {

        }
        if (i==0)
            {
                if(string1[i]!=string1[i+1])
                count++;
            }

        else if (i==length-1)
        {
            if(string1[i]!=string1[i-1])
            count++;
        }
       else if ((string1[i]!=string1[i+1]) && (string1[i] != string1[i-1]))
        {
            count++;
        }
        
    }

    cout<<count;
}