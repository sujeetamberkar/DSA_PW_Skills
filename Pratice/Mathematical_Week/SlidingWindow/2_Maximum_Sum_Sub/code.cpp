#include<iostream>
#include <algorithm>
using namespace std;
int main ()
{
int array[] = {7,1,2,5,8,4,9,3,6};
int n = sizeof(array)/sizeof(array[0]);

int k = 3;

int sum = 0;

// Find the sum of the first window 
for (int i = 0; i <k;i++)
{
    sum += array[i];
} // Total NO of opperations = k 


// Now use sliding window algo
int max_sum = sum;
int i = 1;
int j = k;
while (j <n)
{
    sum = sum - array[i-1];
    sum = sum + array[j];
    max_sum = max (sum,max_sum);
    i++;
    j++;
} // Total NO of opperations n - k 
cout <<max_sum;

// Total NO of opperations = O (n)
}