#include <iostream>
#include <vector>

using namespace std;

void helper(vector<int>& nums, vector<int> partial_answer, vector<vector<int > > & final_Answer, int index) {
    if (index == nums.size()) {
        final_Answer.push_back(partial_answer);
        return;
    }

    helper(nums, partial_answer, final_Answer, index + 1);
    partial_answer.push_back(nums[index]);
    helper(nums, partial_answer, final_Answer, index + 1);
}

vector<vector<int > > subsets(vector<int>& nums) {
    vector<int> partial_answer;
    vector<vector<int > > final_Answer;
    helper(nums, partial_answer, final_Answer, 0);
    return final_Answer;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<vector<int > > result = subsets(nums);
    
    
    cout << "Subsets:\n";
    for (vector <int> subset : result) {
        {
            for (int element : subset)
            {
                cout <<element<<" ";
            }
            cout<<endl;
        }
      
    }

    return 0;
}
