class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[write]) {
                nums[++write] = nums[i];
            }
        }
        return write+1;
    }
};