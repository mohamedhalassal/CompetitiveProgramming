class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0, i = 1;
        map<int, int> mp;
        mp[nums[0]]++;
        while (i < nums.size()) {
            if (nums[i] != nums[write] || mp[nums[i]] < 2) {
                nums[++write] = nums[i];
                mp[nums[i]]++;
            }
            i++;
        }
        return write + 1;
    }
};