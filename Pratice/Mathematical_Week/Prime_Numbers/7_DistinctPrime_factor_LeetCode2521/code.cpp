#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
void fillSieve(vector<bool> &);
int distinctPrimeFactors(vector<int> &);

int main()
{
    int array[] = {2, 4, 3, 7, 10, 6};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> vec(array, array + n);
    int answer = distinctPrimeFactors(vec);
    cout << answer;
}
int distinctPrimeFactors(vector<int> &nums)
{
    int max_element = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        max_element = max(max_element, nums[i]);
    }

    // 1) Find the max element 
    // 2) Generate a sleve of elements (max_element)

    vector <bool> max_element_sleve(max_element + 1, false);

    fillSieve(max_element_sleve);
    vector<int> store;
    int i = 0;
    for (int element : max_element_sleve)
    {
        if (element == 0)
        {
            store.push_back(i);
        }
        i++;
    }

    // 3) store all the prime factors in store

    vector<bool> checker(store.size(), false);
    int count = 0;

    // 4) checkers ( same as store.size() )
    // 5) Check which all prime numbers are prime factors  
    for (int i = 0; i < n; i++)
    {
        int element = nums[i];
        for (int j = 0; j < store.size(); j++)
        {
            if (store[j] > element)
            {
                break;
            }

            if (element % store[j] == 0)
            {
                checker[j] = true;
            }
        }
    }
    // 5) if divisible, put TRUE

    for (bool element : checker)
    {
        if (element)
            count++;
    }

    return count;
}
void fillSieve(vector<bool> &sieve)
{
    int n = sieve.size();
    sieve[0] = true;
    sieve[1] = true;
    for (int i = 2; i < sqrt(n); i++)
    {
        int multiplier = 2;
        while (multiplier * i <= n)
        {
            sieve[multiplier * i] = true;
            multiplier++;
        }
    }
}
