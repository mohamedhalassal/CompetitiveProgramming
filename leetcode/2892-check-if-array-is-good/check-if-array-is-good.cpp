class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int freq[201] = {0};
        for (auto it : nums) {
            freq[it]++;
            if (it != nums.back() && freq[it] > 1) {
                return false;
            }
        }
        return (n - nums[n - 1] == 1 && freq[nums[n - 1]] == 2);
    }
};