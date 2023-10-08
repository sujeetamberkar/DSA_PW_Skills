#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void display_Max_Value(vector<int> &, int,int);
int return_Max_Value(vector<int> &, int);

int main()
{
    vector<int> v;
    v.push_back(29);
    v.push_back(100);
    v.push_back(2);
    display_Max_Value(v,0,INT_MIN);

    cout<<return_Max_Value(v,0);
    return 0;
}
void display_Max_Value(vector <int> & v, int index, int max_element)
{
    if (v.size()==index)
    {
        cout <<max_element;
        return;
    }
    max_element=max(max_element,v[index]);
    display_Max_Value(v,index+1,max_element);
}
int return_Max_Value(vector<int> &v, int index)
{
    if (index== v.size())
    {
        return INT_MIN;
    }
    int current_Element= v[index];
    int next_Element = return_Max_Value(v,index+1);
    // return max(v[index],return_Max_Value(v,index+1));
    return max(current_Element,next_Element);
}