#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter NO of students ";
    int number_Of_Student=5;
    cin>>number_Of_Student;
    int array[number_Of_Student];
    
    cout<<"Input Marks\n";
    for(int i=0;i<number_Of_Student;i++)
    {
        cin>>array[i];
    }

    cout<<"Output \n";
    for(int i=0;i<number_Of_Student;i++)
    {
        if(array[i]<35)
        {
            cout<<i<<" ";
        }
    }

}