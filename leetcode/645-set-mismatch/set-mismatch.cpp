class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sz = nums.size();
        vector<int> ans, freq(sz + 1, 0);
        for (int i = 0; i < sz; i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] == 2)
                ans.push_back(nums[i]);
        }
        for (int i = 1; i <= sz + 1; i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};