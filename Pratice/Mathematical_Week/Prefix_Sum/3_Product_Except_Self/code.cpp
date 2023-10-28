#include<iostream>
#include<vector>

using namespace std;
vector<int> productExceptSelf(vector<int>&);
int main ()
{
    int array []= {1,2,3,4};
    int n = sizeof(array)/sizeof(array[0]);
    vector < int > v (array,array+n);

    vector < int > answer = productExceptSelf(v);
    for (int element : answer)
    {
        cout<<element<<" ";
    }
}

vector<int> productExceptSelf(vector<int>& nums)
{
    int n = nums.size();
    vector < int > answer ;
    vector < int > pre_product;
    vector < int > suffix_product;

    int product = 1;

    for (int element : nums)
    {
        product = product * element;
        pre_product.push_back(product);
    }

    product=1;

    for (int i = n-1; i >= 0 ; i --)
    {
        product= product * nums[i];
        suffix_product.push_back(product);
    }
    reverse(suffix_product.begin(),suffix_product.end());

    product = 1;
    answer.push_back(suffix_product[1]);
    for (int i = 0 ; i <n; i ++)
    {
        if (i > 0 && i < n -1 )
        {
            product = pre_product[i-1]*suffix_product[i+1];
            answer.push_back(product);
        }
    }
    answer.push_back(pre_product[n-2]);

    return answer;

}

// 
//     Main Array  [1   2   3   4]
//     
//     Pre_Product [1   2   6   24]
// 
//     Post_Product [24  24  12 4 ]

//   now 
        // preproduct (i-1) * postproduct (i+1)
//      