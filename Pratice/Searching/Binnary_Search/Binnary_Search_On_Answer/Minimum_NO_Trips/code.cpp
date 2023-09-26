#include<iostream>
using namespace std;

// Question: 
// Determine the minimum time required for buses, where each bus can take 
// time[i] to complete one trip, to collectively complete totalTrips.

// Logic:
// Use binary search to find the minimum time such that 
// in that given time, buses can complete at least totalTrips.

bool check(long long mid, vector<int>& time, int totalTrips) {
    long trips = 0;
    int n = time.size();

    // Calculate how many trips can be done by all buses in 'mid' time.
    for (int i = 0; i < n; i++) {
        trips += mid / time[i];
    }
    return trips >= totalTrips;
}

long long minEatingSpeed(vector<int>& time, int totalTrips) {
    int n = time.size();
    long long worst_case = (long long)INT_MIN;

    // Find the maximum time a single bus takes.
    for (int i = 0; i < n; i++) {
        worst_case = max(worst_case, (long long)time[i]);
    }

    long long low = 1;
    long long high = worst_case * totalTrips;
    long long mid;
    long long answer = -1;

    // Binary search on time.
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (check(mid, time, totalTrips)) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return answer;
}

int main() {
    vector<int> time;
    int n, totalTrips, elem;

    cout << "Enter number of buses: ";
    cin >> n;

    cout << "Enter time taken by each bus: ";
    for (int i = 0; i < n; i++) {
        cin >> elem;
        time.push_back(elem);
    }

    cout << "Enter total trips: ";
    cin >> totalTrips;

    cout << "Minimum time required: " << minEatingSpeed(time, totalTrips) << endl;
    return 0;
}
