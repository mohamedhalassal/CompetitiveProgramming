class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, k = 0, ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            k += nums[i];
            while (k >= target) {
                ans = min(ans, i - l + 1);
                k -= nums[l];
                l++;
            }
        }
        if (ans == INT_MAX)
            return 0;
        else
            return ans;
    }
};