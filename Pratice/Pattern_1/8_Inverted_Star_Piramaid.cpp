#include<iostream>
using namespace std;
int main()
{

    // Math logic 
    //  Row NO + No. of starts = n + 1 
    int number;
    cout<<"Enter a number";
    cin>>number;
    for (int i = 1; i <= number; i++)
    {
        for(int j=1; i+j <= number+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}
/*
Enter a number4
****
***
**
*
*/
