class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for (int i = 0; i < nums.size(); i++) {
            reach = max(reach, nums[i] + i);
            if (nums[i] == 0 && reach <= i && i != nums.size() - 1) {
                return false;
            }
        }
        return true;
    }
};