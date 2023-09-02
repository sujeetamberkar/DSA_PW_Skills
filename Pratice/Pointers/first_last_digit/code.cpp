#include<iostream>
using namespace std;
void find(int , int * , int *);
int main()
{
    int n, first_digit, last_digit;
    cout<<"Enter a number\t";
    cin>>n;

    int *ptr1=&first_digit;
    int *ptr2=&last_digit;
    find(n,ptr1,ptr2);
    cout<<"First digit\t"<<first_digit<<endl;
    cout<<"Last digit\t"<<last_digit;

    return 0;
}
void find(int n, int* ptr1, int* ptr2)
{
    *ptr2=n%10;
    while(n>=9)
    {
        n=n/10;
    }

    *ptr1=n;


}