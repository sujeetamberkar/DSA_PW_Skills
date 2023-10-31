#include<iostream>
#include<vector>
using namespace std;
void Display_Vcetor(vector<int> &a);
int main()
{
    int n;
    int temp;
    int swap;
    vector<int> v;
    cout<<" How many elements ";
    cin>>n;

    cout<<"Enter ELements ";
    for(int i=0; i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Orignal Array"<<endl;
    Display_Vcetor(v);

    for(int i=0, j=v.size()-1; i<j;i++,j--)
    {
        v[i]=v[i]+v[j];
        v[j]=abs(v[i]-v[j]);
        v[i]=abs(v[j]-v[i]);
        
    }

    cout<<"After Reversing Array"<<endl;
    Display_Vcetor(v);
}

void Display_Vcetor(vector<int> &a)
{
    for(int i=0; i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}