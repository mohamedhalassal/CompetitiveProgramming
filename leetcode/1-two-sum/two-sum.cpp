class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int sz = nums.size();
        for (int i = 0; i < sz; i++) {
            for (int j = i + 1; j < sz; j++) {
                if(nums[i]+nums[j]==target){
                    ans[0]=i,ans[1]=j;
                    return ans;
                }
            }
        }
        return ans;
    }
};