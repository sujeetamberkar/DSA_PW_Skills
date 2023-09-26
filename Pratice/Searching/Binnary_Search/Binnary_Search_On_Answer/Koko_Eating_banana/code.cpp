#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Question Summary:
// Given 'n' piles of bananas with piles[i] bananas in the ith pile,
// find the minimum eating speed 'k' for Koko to finish all bananas in 'h' hours.

// Solution Logic:
// We use binary search on possible speeds. The minimum speed is 1 and the maximum speed is the largest pile.
// For each speed, we check if Koko can finish the bananas in 'h' hours using the 'check' function.

bool check(int speed, vector<int>& piles, int h) {
    int count = 0;
    int n = piles.size();
    for (int i = 0; i < n; i++) {
        if (count > h) return false; // Exit early to save calculations.
        if (speed >= piles[i]) {
            count++;
        } else if (piles[i] % speed == 0) {
            count += piles[i] / speed;
        } else {
            count += piles[i] / speed + 1;
        }
    }
    return count <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();
    int max_Speed = INT_MIN;
    for (int i = 0; i < n; i++) {
        max_Speed = max(max_Speed, piles[i]);
    }
    
    int low = 1, high = max_Speed, answer = -1, mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (check(mid, piles, h)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return answer;
}

int main() {
    int n, h;
    cout << "Enter number of piles: ";
    cin >> n;
    
    vector<int> piles(n);
    cout << "Enter banana count for each pile: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    cout << "Enter number of hours: ";
    cin >> h;

    cout << "Minimum eating speed required: " << minEatingSpeed(piles, h) << endl;

    return 0;
}
