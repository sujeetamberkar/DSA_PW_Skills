#include<iostream>
using namespace std;
void Display_Vcetor(vector<int> &a);
int main()
{
    int n;
    int temp;
    vector<int> v;
    cout<<" How many elements ";
    cin>>n;

    cout<<"Enter ELements ";
    for(int i=0; i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

    vector<int> v2;
    for(int i=0;i<n;i++)
    {
        v2.push_back(v.at(v.size()-1-i));

    }
    Display_Vcetor(v);
    Display_Vcetor(v2);


}

void Display_Vcetor(vector<int> &a)
{
    for(int i=0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}