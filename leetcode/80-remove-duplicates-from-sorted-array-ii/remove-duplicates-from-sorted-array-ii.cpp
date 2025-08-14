class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (write < 2 || nums[i] != nums[write - 2]) {
                nums[write++] = nums[i];
            }
        }
        return write;
    }
};