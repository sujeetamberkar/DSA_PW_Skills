#include<iostream>
#include<vector>

// Usually in subsequence questions, the order is important so you should not sort it
// But in this question we only care about the length of the subsequence so its okay to sort

//  1) Sort Nums
//  2) Now make refix sum for (nums)
//  3) Use prefix Nums to find how many elements are less than each quiers 
//  4) Store the answer in vector 
using namespace std;
vector<int> answerQueries(vector<int>& , vector<int>& );

int main ()
{
    int array_nums[]= {4,5,2,1};
    int length_array_nums=sizeof(array_nums)/sizeof(array_nums[0]);
    int array_queries[]={3,10,21};
    int length_array_queries=sizeof(array_queries)/sizeof(array_queries[0]);


    vector < int > nums (array_nums,array_nums+length_array_nums);
    vector < int > queries (array_queries,array_queries +length_array_queries );
    vector < int > answer = answerQueries(nums,queries);


    for (int element : answer)
    {
        cout << element << " ";
    }
}
vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int length_nums = nums.size();
        int length_queries = queries.size();
        vector < int > answer;
        vector < int > answer2;

        vector < int > nums_prefix;

        sort(nums.begin(),nums.end());
        int sum=0;
        for (int i = 0 ; i < length_nums; i ++)
        {
            sum = sum + nums [ i];
            nums_prefix.push_back(sum);
        }


        // We can sort using Binarry Sort, (n+1) to do it in sorted time instead of n^2 

        for (int i = 0 ; i < length_queries; i ++)
        {
            int check = queries[i];
            int count = 0;
            for ( int i = 0 ; i < length_nums; i ++)
            {
                if (nums_prefix[i] <= check)
                {
                    count++;
                }
            }
            answer.push_back(count);
        }

       
        // for (int i = 0 ; i < length_queries; i ++)
        // {
        //     int max_length = 0;
        //     int low = 0; 
        //     int high = length_nums-1;
        //     while (low <= high)
        //     {
        //         int mid = low + (high-low)/2;
        //         if ( nums [mid] > queries [i])
        //         {
        //             high = mid - 1;
        //         }

        //         else {
        //             max_length= mid + 1;
        //             low = mid +1;
        //         }
        //     }
        //     answer2.push_back(max_length);
            
        // }


        return answer2;
    }