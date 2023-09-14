//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;

int product_Array(int [],int );

int main()
{
    int number;
    cout<<"Enter a number\t";
    cin>>number;

    int array[number];
    for(int i=0;i<number;i++)
    {
        cin>>array[number];
    }
    int answer=product_Array(array,number);
    cout<<"The Product"<<answer;

return 0;
}

int product_Array(int array[],int n)
{
    int pr=1;
    for(int i=0;i<n;i++)
    {
        pr=pr*array[i];
    }

    return pr;

}