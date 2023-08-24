//Armstrong Number between 1 and 500
#include<iostream>
using namespace std;
int main()
{
    int lowwer_limit=1;
    int Upper_Limit=500;
    int temp1=0;
    int temp2=0;
    int sum=0;
    int OgNum=0;

    for(int i=lowwer_limit;i<=Upper_Limit;i++)
    {
        OgNum=i;
        temp1=OgNum;

        while (temp1>0)
        {
            temp2=temp1%10;
            sum=sum+temp2*temp2*temp2;
            temp1=temp1/10;
        }

        if (OgNum==sum)
        {
            cout<<OgNum<<endl;
        }
        sum=0;
        
        
    }
    return 0;
}