class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> freq(nums[n - 1] + 1);
        for (auto it : nums){
            freq[it]++;
            if(it!=nums.back()&&freq[it]>1){
                return false;
            }
        }
        return (n - nums[n - 1] == 1 && freq[nums[n - 1]] == 2);
    }
};