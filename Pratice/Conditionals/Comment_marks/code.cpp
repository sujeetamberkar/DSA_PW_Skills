#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout <<"Input Marks\t";
    cin>>marks;
    
    if (marks >= 91)
    {
        cout<<"Excelent";
    }

    else if (marks>= 81)
    {
        cout<<"Very Good";
    }
    
    else
    {
        cout<<"fail";
    }



    return 0;

}