/*

*        *
 *      *
  *    *
   *  *
    *

*/
#include<iostream>
using namespace std;
int main()
{
    int number=5;
    cout<<"Enter a number \t";
    cin>>number;

   for(int i=1;i<=number;i++)
    {
        for(int j=1;j<=(2*number);j++)
        {
            if (i==number && j==number)
            {
                cout<<"*";
                break;
            }
            
            if(j==i || (i+j ==(2*number + 1)))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
   }


    return 0;
}