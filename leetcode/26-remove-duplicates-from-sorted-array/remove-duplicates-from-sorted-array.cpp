class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0, last = 200;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != last) {
                last = nums[i];
                nums[write++] = last;
            }
        }
        return write;
    }
};