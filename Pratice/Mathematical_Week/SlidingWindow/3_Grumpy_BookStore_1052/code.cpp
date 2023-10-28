// Instead of finding the highest satisfaction find the highest lost


// 10121175         ->>> Customers
// 01010101         ->>> Grumpy 
//                  ->>> Modefied Grumpy


// This is not equal to the window with the least satisfaction
// We want the most loss 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int maxSatisfied(vector<int>& , vector<int>& , int );


int main ()
{
    int coustumers []= {1,0,1,2,1,1,7,5};
    int c_size = sizeof(coustumers)/sizeof(coustumers[0]);
    int grumpy [] =    {0,1,0,1,0,1,0,1};
    int min = 3;

    vector < int > c  (coustumers,coustumers+c_size);
    vector <int > g (grumpy, grumpy + c_size);
    int answer = maxSatisfied(c,g,min);
    cout <<answer;
}
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        // Calculate initial loss for the first window of size minutes
        int loss = 0;
        for (int i = 0; i < minutes; i++) {
            loss += customers[i] * grumpy[i];
        }
        int max_loss = loss;

        int i = 1;
        int j = minutes;
        int index = 0;  // Initialize to 0
        while (j < n) {
            loss = loss - customers[i-1] * grumpy[i-1];
            loss = loss + customers[j] * grumpy[j];
            if (loss > max_loss) {
                max_loss = loss;
                index = i;
            }
            i++;
            j++;
        }

        // Calculate total satisfaction
        int answer = 0;
        for (int m = 0; m < n; m++) {
            if (index <= m && m < index + minutes) {
                answer += customers[m];
            } else if (!grumpy[m]) {
                answer += customers[m];
            }
        }

        return answer;
    }
