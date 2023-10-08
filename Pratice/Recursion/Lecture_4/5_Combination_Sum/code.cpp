// This program finds all unique combinations of candidates (numbers) 
// where the candidate numbers sum up to a given target. 
// Each number in candidates may be used an unlimited number of times.
// All numbers (including the target) will be positive integers.
// The solution is built using a recursive backtracking method.

#include<iostream>
#include<vector>
using namespace std;

// Recursive function to generate all combinations
// answer: the final answer to store all combinations
// temp_vector: the current combination being constructed
// candidates: the list of available numbers
// target: the remaining sum required
// index: current index in candidates to start picking numbers from
void combinations (vector < vector < int > > & answer, vector < int > temp_vector, 
                   vector < int > & candidates, int target, int index )
{
    // If target becomes 0, then current combination is valid and can be added to answer
    if (target == 0)
    {
        answer.push_back(temp_vector);
        return;
    }
    // If target becomes negative, then current combination is not valid
    if (target < 0)
    {
        return;
    }
    // Iterate through the candidates starting from 'index' 
    for (int i = index; i < candidates.size(); i++)
    {
        // Include the current candidate in the combination
        temp_vector.push_back(candidates[i]);
        // Recursively find further combinations with reduced target
        combinations(answer, temp_vector, candidates, target - candidates[i], i);
        // Exclude the current candidate (backtrack)
        temp_vector.pop_back();
    }
}

// Wrapper function for the recursive combinations function
vector<vector<int > > combinationSum(vector<int>& candidates, int target) {
        vector < vector  < int > > answer;
        vector < int > temp_vector;
        combinations(answer, temp_vector, candidates, target, 0);
        return answer;
}

int main ()
{
    int target = 8;
    vector < int > candidate;
    candidate.push_back(2);
    candidate.push_back(3);
    candidate.push_back(5);
    
    // Fetching all combinations summing up to target
    vector <vector  < int > > answer = combinationSum(candidate, target);
    
    // Printing the combinations
    for (vector <int> temp : answer)
    {
        for (int element : temp)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}
