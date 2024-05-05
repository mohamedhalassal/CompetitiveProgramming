class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        if (it1 == it2)
            return {-1, -1};
        else {
            int i1 = it1 - nums.begin(), i2 = it2 - nums.begin()-1 ;
            return {i1, i2};
        }
    }
};