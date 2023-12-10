#include<unordered_map>
#include<iostream>
using namespace std;
vector<int> findEvenNumbers(vector<int>& );
int main ()
{
    vector <int> nums = {2,1,3,0};
    vector <int> answer = findEvenNumbers(nums);
    for(int element: answer)
        cout<<element<<"\n";

}
vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int, int> m;
        for (int element : digits)
            m[element]++;
        
        vector<int> ans;
        for (int i = 100; i <= 998; i += 2) { // For even number
            int x = i;
            int a = x % 10; // Last digit
            x = x / 10;
            int b = x % 10; // Middle digit
            x = x / 10;
            int c = x; // First digit

            unordered_map<int, int> temp(m); // Temporary map to avoid modifying original map
            if(temp.find(a)!=temp.end())
            {
                temp[a]--;
                if(temp[a]==0)
                    temp.erase(a);
                
                if(temp.find(b)!=temp.end())
                {
                    temp[b]--;
                    if(temp[b]==0)
                         temp.erase(b);
                    if(temp.find(c)!=temp.end())
                        {
                            ans.push_back(i);
                        }
                }

            }

        }
        return ans;
    }