#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// This program determines the most frequently occurring word(s) in a given string.
// 1. The user is prompted to input a string.
// 2. The program tokenizes the string into words and stores them in a vector.
// 3. After sorting the words, the program identifies and prints the word(s) with the highest frequency.

int main()
{
    string s = "Sujeet is student . He is DSA  also student ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> stringvector1;
    while (ss >> temp)
    {
        stringvector1.push_back(temp);
    }

 
    sort(stringvector1.begin(),stringvector1.end());

    int count=1;
    int max_count=1;

    for(int i=1;i<stringvector1.size();i++)
    {
        if(stringvector1[i]==stringvector1[i-1])
        {
            count++;
        }
        else {
            count=1;
        }
        max_count=max(max_count,count);
    }
    count=1;
    int temp_Max_count=1;
    for(int i=1;i<stringvector1.size();i++)
    {
        if(stringvector1[i]==stringvector1[i-1])
        {
            count++;
        }
        else {
            count=1;
        }

        if (count==max_count)
        {
            cout<<"The most common word in the string is \""<<stringvector1[i]<<"\""<<endl;
        }
    }
}