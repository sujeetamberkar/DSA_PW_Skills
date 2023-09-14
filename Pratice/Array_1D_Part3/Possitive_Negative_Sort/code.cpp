#include<iostream>
using namespace std;

void sortBinarry(vector<int> &a);
void print_Vector(vector <int> &a);
int main()
{
    int n;
    cout<<"Enter No of elements ";
    cin>>n;
    int temp;
    vector <int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    sortBinarry(vec);
    print_Vector(vec);
    return 0;
}
void sortBinarry(vector<int> &a)
{
    int n= a.size();
    for(int i=0,j=n-1; i<j;)
    {

        if(a[i]<0)
        {
            i++;
        }
        else if (a[j]>0)
        {
            j--;
        }
        else if (a[i]>0 && a[j] <0 )
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }

    }
}
void print_Vector(vector <int> &a)
{
        int n= a.size();
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
}
