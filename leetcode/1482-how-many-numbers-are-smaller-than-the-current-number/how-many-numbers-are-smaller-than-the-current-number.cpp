class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int ans1 = 0;
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j])
                    ans1++;
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};