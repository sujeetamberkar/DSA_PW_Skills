#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x);

int main() {
    vector<int> arr;
    int n, k, x;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the value of x: ";
    cin >> x;

    vector<int> result = findClosestElements(arr, k, x);
    cout << "The closest elements are:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int n = arr.size();
    vector<int> answer (k);

    // 1. Handling Edge Cases
    if (x < arr[0]) {
        for(int i = 0; i < k; i++) {
            answer[i] = arr[i];
        }
        return answer;
    }

    if (x > arr[n-1]) {
        int i = n-1;
        int j = k-1;
        while(j >= 0) {
            answer[j] = arr[i];
            j--;
            i--;
        }
        return answer;
    }

    // 2. Binary Search to find x or its closest elements
    int low = 0;
    int high = n-1;
    bool flag = false; // flag to check if x is found
    int t = 0; // counter to traverse the answer array
    int mid = -1;

    while(low <= high) {
        mid = low + (high-low)/2;
        if (arr[mid] == x) {
            flag = true;
            answer[t] = arr[mid];
            t++;
            break;
        } else if (arr[mid] > x) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    int lb = high;
    int ub = low;
    if (flag) {
        lb = mid - 1;
        ub = mid + 1;
    }

    // 3. Finding Closest Elements
    while (t < k && lb >= 0 && ub <= n-1) {
        int d1 = abs(x - arr[lb]);
        int d2 = abs(x - arr[ub]);
        if (d1 <= d2) {
            answer[t] = arr[lb];
            lb--;
        } else {
            answer[t] = arr[ub];
            ub++;
        }
        t++;
    }

    // If lb goes out of bounds, fill the remaining slots from ub
    if (lb < 0) {
        while (t < k) {
            answer[t] = arr[ub];
            ub++;
            t++;
        }
    }

    // If ub goes out of bounds, fill the remaining slots from lb
    if (ub > n-1) {
        while (t < k) {
            answer[t] = arr[lb];
            lb--;
            t++;
        }
    }

    // 4. Sorting the Output
    sort(answer.begin(), answer.end());

    // 5. Return the Result
    return answer;
}

// Time Complexity : O(klogk+logn).