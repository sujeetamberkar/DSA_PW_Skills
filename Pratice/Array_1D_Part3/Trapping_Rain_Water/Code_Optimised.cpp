class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) return 0;  // Edge case

        int n = height.size();

        vector<int> pre(n, 0);
        vector<int> post(n, 0);

        pre[0] = height[0];
        for (int i = 1; i < n; i++) {
            pre[i] = std::max(pre[i - 1], height[i]);
        }

        // Calculate the right max for every index
        post[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            post[i] = std::max(post[i + 1], height[i]);
        }

        // Calculate the trapped water for every index and sum it up
        int volume = 0;
        for (int i = 0; i < n; i++) {
            volume += std::min(pre[i], post[i]) - height[i];
        }

        return volume;
    }
};
