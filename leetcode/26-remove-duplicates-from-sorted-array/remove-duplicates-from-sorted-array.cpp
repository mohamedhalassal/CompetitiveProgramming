class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[w]) {
                nums[++w]=nums[i];
            }
        }
        return w+1;
    }
};