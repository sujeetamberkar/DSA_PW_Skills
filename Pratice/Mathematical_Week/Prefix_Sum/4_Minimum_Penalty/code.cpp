#include<iostream>
#include<vector>
#include<string>
using namespace std;
int bestClosingTime(string );
int min_index(vector < int > &);

// Penlty  (array) =   ( No of 'Y' after  > n )    + ( No of 'N' before n )
// Pentalty_answer = min index (Penalty_Array)
int main ()
{
    string string1 = "YYYY";

    int answer = bestClosingTime(string1);
    cout <<answer;

}
int bestClosingTime(string customers)
{
    string og_string = customers;
    int length_n = customers.length()+1;
    vector < int > post_NO_Y_After_N;
    vector < int > pre_NO_N_BeforeN;
    vector < int > answer;
    int count = 0;
   
    for (int i = 0 ; i < length_n; i ++)
    {
        pre_NO_N_BeforeN.push_back(count);
        if (customers[i]=='N')
        {
            count= count+1;
        }
    }
    count = 0;


    // Count 'N' before each position
    for (int i = length_n -1; i >= 0 ; i -- )
    {

        if (customers[i]=='Y')
        {
            count = count +1;
        }
        post_NO_Y_After_N.push_back(count);

    }
    reverse(post_NO_Y_After_N.begin(),post_NO_Y_After_N.end());


    // Count 'Y' after each position (reverse)
    for (int i = 0; i < length_n ; i++ )
    {
        answer.push_back(post_NO_Y_After_N[i]+pre_NO_N_BeforeN[i]);
    }

    // for (int i = 0 ; i < length_n;i++)
    // {
    //     cout<<customers[i]<<" ";
    // }
    // cout<<endl;


    // for (int i = 0 ; i <length_n;i++)
    // {
    //     cout<<pre_NO_N_BeforeN[i]<<" ";
    // }
    // cout <<endl;


    // for (int i = 0; i < length_n ; i ++)
    // {
    //     cout <<post_NO_Y_After_N[i]<<" ";
    // }
    // cout<<endl;
    // for (int i = 0; i < length_n ; i++ )
    // {
    //     cout <<answer[i]<<" ";
    // }

    int var = min_index(answer);



    return var ;
}
int min_index(vector < int > & nums)
{
    int min = nums[0];
    int index = 0;
    for (int i = 0 ; i < nums.size();i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
            index=i;
        }
    }
    return index;
}
